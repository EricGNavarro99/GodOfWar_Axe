// Created by Eric G. Navarro

#include "Axe.h"
#include "PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Components/SceneComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/RotatingMovementComponent.h"

AAxe::AAxe()
{
	PrimaryActorTick.bCanEverTick = true;

	SetComponents();
}

void AAxe::BeginPlay()
{
	Super::BeginPlay();

	_trigger->OnComponentBeginOverlap.AddDynamic(this, &AAxe::StickAxe);

	//if (_player == nullptr) _player = Cast<APlayerCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass()));
	//if (_playerController == nullptr) _playerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	
	EnableProjectileMovementComponent(true);
	EnableRotatingMovementComponent(true);
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
	_trigger->SetupAttachment(_staticMesh);

	_arrow->ArrowSize = -0.05f;
	_staticMesh->SetWorldLocation(FVector(0.0f, -25.0f, 0.0f));
	_staticMesh->SetWorldScale3D(FVector(0.08f, 0.08f, 0.08f));
	_trigger->SetWorldLocation(FVector(-330.0f, 65.0f, 0.0f));

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
}

void AAxe::RelocateStickedAxe()
{
	// When axe hits, relocate rotation of axe.
}

void AAxe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
