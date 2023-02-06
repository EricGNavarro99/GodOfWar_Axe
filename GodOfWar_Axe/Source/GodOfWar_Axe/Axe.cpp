// Created by Eric G. Navarro

#include "Axe.h"
#include "PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/SceneComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/RotatingMovementComponent.h"

AAxe::AAxe()
{
	PrimaryActorTick.bCanEverTick = false;

	SetComponents();
}

void AAxe::BeginPlay()
{
	Super::BeginPlay();

	_trigger->OnComponentBeginOverlap.AddDynamic(this, &AAxe::StickAxe);

	if (_player == nullptr) _player = Cast<APlayerCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass()));
	if (_playerController == nullptr) _playerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	
	EnableProjectileMovementComponent(true);
	EnableRotatingMovementComponent(true);

	_hit = HitSurface();
}

void AAxe::SetComponents()
{
	_root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	_arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	_staticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	_trigger = CreateDefaultSubobject<USphereComponent>(TEXT("Trigger"));
	_projectileComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComponent"));
	_rotatingComponent = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingComponent"));

	SetRootComponent(_root);
	_arrow->SetupAttachment(_root);
	_staticMesh->SetupAttachment(_arrow);
	_trigger->SetupAttachment(_arrow);

	_arrow->ArrowSize = -0.05f;
	_staticMesh->SetWorldLocation(FVector(0.0f, -25.0f, 0.0f));
	_staticMesh->SetWorldScale3D(FVector(0.08f, 0.08f, 0.08f));
	_trigger->SetWorldLocation(FVector(-25.0f, -25.0f, 0.0f));
	_trigger->SetSphereRadius(2.0f);

	_projectileComponent->Velocity = FVector(-1.0f, 0.0f, 0.0f);
	_projectileComponent->InitialSpeed = _movementSpeed;
	_projectileComponent->MaxSpeed = _movementSpeed + 500.0f;
	_rotatingComponent->RotationRate.Yaw = -_rotationSpeed;
}

void AAxe::EnableProjectileMovementComponent(bool bEnable)
{
	if (!bEnable) _projectileComponent->Deactivate();
	else if (bEnable && !_projectileComponent->IsActive()) _projectileComponent->Activate();
	
	_projectileComponent->bSimulationEnabled = bEnable;	
}

void AAxe::EnableRotatingMovementComponent(bool bEnable)
{
	if (!bEnable) _rotatingComponent->Deactivate();
	else if (bEnable && !_rotatingComponent->IsActive()) _rotatingComponent->Activate();
}

void AAxe::StickAxe(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{
	EnableProjectileMovementComponent(false);
	EnableRotatingMovementComponent(false);

	RelocateStickedAxe();

	_trigger->Deactivate();
}

void AAxe::RelocateStickedAxe()
{
	if (_playerController == nullptr) return;

	int32 surfaceInclination = _hit.ImpactNormal.Rotation().Pitch;
	bool bIsWall = surfaceInclination == 0;

	float location = bIsWall ? _staticMesh->GetRelativeLocation().Y - UKismetMathLibrary::RandomFloatInRange(10.0f, 50.0f) : -25.0f;
	float rotation = bIsWall ? UKismetMathLibrary::RandomFloatInRange(-40.0f, -50.0f) : UKismetMathLibrary::RandomFloatInRange(-5.0f, -20.0f);

	FVector newLocation = FVector(0.0f, 0.0f, 0.0f);
	newLocation.Y = location;

	FRotator newRotation = FRotator(0.0f, 0.0f, 0.0f);
	newRotation.Yaw = rotation;

	if (bIsWall) 
	{
		FRotator deletePitchActorRotation = GetActorRotation();
		deletePitchActorRotation.Pitch = 0.0f;
		SetActorRotation(deletePitchActorRotation);
	}

	_staticMesh->SetRelativeLocation(newLocation);
	_staticMesh->SetRelativeRotation(newRotation);
}

FHitResult AAxe::HitSurface()
{
	if (_playerController == nullptr) return FHitResult();

	FVector location;
	FRotator rotation;
	_playerController->GetPlayerViewPoint(location, rotation);

	FVector end = location + rotation.Vector() * 10000;

	FCollisionQueryParams params;
	params.AddIgnoredActor(this);
	params.AddIgnoredActor(GetOwner());

	GetWorld()->LineTraceSingleByChannel(_hit, location, end, ECollisionChannel::ECC_GameTraceChannel1, params);

	return _hit;
}

void AAxe::ReturnAxeToPlayer()
{
	_axeStickedLocation = GetActorLocation();

	GetWorldTimerManager().SetTimer(_timerHandle, this, &AAxe::ReturnAxeToPlayer_TimerMethod, 0.01f, true, 0.01f);
}

FVector AAxe::CreateBQCurve(float time, FVector axeStickedLocation, FVector playerCurvePoint, FVector axeHandLocation)
{
	return (FMath::Pow(1 - time, 2) * axeStickedLocation) + (2 * (1 - time) * time * playerCurvePoint) + (FMath::Pow(time, 2) * axeHandLocation);
}

void AAxe::ReturnAxeToPlayer_TimerMethod()
{
	SetActorLocation(CreateBQCurve(_timer, _axeStickedLocation, _player->_curvePoint->GetComponentLocation(), _player->_rightHandAxe->GetComponentLocation()));
	_timer += GetWorld()->GetDeltaSeconds();

	float distance = FVector::Dist(GetActorLocation(), _player->_rightHandAxe->GetComponentLocation());

	if (distance > 30.0f)
	{
		_rotatingComponent->RotationRate.Yaw = _rotationSpeed / 2.0f;
		EnableRotatingMovementComponent(true);
	}
	else if (distance > 10.0f && distance < 30.0f)
	{
		SetActorRotation(_player->_rightHandAxe->GetComponentRotation());
	}
	else if (distance < 5.0f)
	{
		_player->MakeHandAxeAppearDisappear(false);
		_player->PlayCameraShake();
		_player->_bCallAxe = false;
		_player->_bIsArmed = true;
		_player->_bHaveAxe = true;

		GetWorldTimerManager().ClearTimer(_timerHandle);
		SelfDestroy();
	}
}

void AAxe::SelfDestroy()
{
	this->Destroy();
}

void AAxe::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
