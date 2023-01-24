// Created by Eric G. Navarro

#include "Axe.h"
#include "PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Components/SceneComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/StaticMeshComponent.h"

AAxe::AAxe()
{
	PrimaryActorTick.bCanEverTick = true;

	SetComponents();
}

void AAxe::BeginPlay()
{
	Super::BeginPlay();

	if (_player == nullptr) _player = Cast<APlayerCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass()));
	if (_playerController == nullptr) _playerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	_initialHitLocation = HitLocation();
}

void AAxe::SetComponents()
{
	_root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	_arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	_staticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	SetRootComponent(_root);
	_arrow->SetupAttachment(_root);
	_staticMesh->SetupAttachment(_arrow);

	_arrow->ArrowSize = -0.05f;
	_staticMesh->SetWorldLocation(FVector(0.0f, -25.0f, 0.0f));
	_staticMesh->SetWorldScale3D(FVector(0.08f, 0.08f, 0.08f));
}

void AAxe::MoveAxeToHitLocation(float deltaTime)
{
	if (GetActorLocation() == _initialHitLocation) return;
	
	FVector currentPosition;

	// Establecer sitema correcto de velocidad

	currentPosition.X = FMath::FInterpTo(GetActorLocation().X , _initialHitLocation.X , deltaTime, _axeInitialMovementSpeed);
	currentPosition.Y = FMath::FInterpTo(GetActorLocation().Y , _initialHitLocation.Y , deltaTime, _axeInitialMovementSpeed);
	currentPosition.Z = FMath::FInterpTo(GetActorLocation().Z , _initialHitLocation.Z , deltaTime, _axeInitialMovementSpeed);

	SetActorLocation(currentPosition);
}

void AAxe::RotateAxeToHitLocation()
{
	//if (GetActorLocation() == _initialHitLocation) return; // !
	if (_bStopRotating) return;

	AddActorLocalRotation(FRotator(0.0f, -_axeRotationSpeed, 0.0f), false, 0, ETeleportType::None);
}

FVector AAxe::HitLocation()
{	
	if (_playerController == nullptr) return FVector(0.0f, 0.0f, 0.0f); //!

	FVector location;
	FRotator rotation;	
	_playerController->GetPlayerViewPoint(location, rotation);
	FVector hitDirection = -rotation.Vector();

	FVector end = location + rotation.Vector() * 10000.0f;
	FCollisionQueryParams params;
	params.AddIgnoredActor(this);
	params.AddIgnoredActor(GetOwner());

	FHitResult hit;
	bool hasCollided = GetWorld()->LineTraceSingleByChannel(hit, location, end, ECollisionChannel::ECC_GameTraceChannel1, params);

	if (_bShowHitLocation) DrawDebugPoint(GetWorld(), hit.Location, 5.0f, FColor::Red, true, 0.0f, 0);
	
	if (hasCollided) return hit.Location;
	else return FVector(0.0f, 0.0f, 0.0f);
	//else activar projectile y fisicas
}

void AAxe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MoveAxeToHitLocation(DeltaTime);
	RotateAxeToHitLocation();

	// Parar hacha y recolocar (Hoja clavada en el suelo) cuando se llegue a determinada distancia en el ".hit"
}
