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

	UE_LOG(LogTemp, Warning, TEXT("%s"), *HitLocation().ToString());
}

void AAxe::SetComponents()
{
	_root = CreateDefaultSubobject<USceneComponent>(TEXT("Root_C"));
	_arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow_C"));
	_staticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh_C"));

	SetRootComponent(_root);
	_arrow->SetupAttachment(_root);
	_staticMesh->SetupAttachment(_arrow);

	_arrow->ArrowSize = -0.05f;
	_staticMesh->SetWorldLocation(FVector(0.0f, -25.0f, 0.0f));
	_staticMesh->SetWorldScale3D(FVector(0.08f, 0.08f, 0.08f));
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

	DrawDebugLine(GetWorld(), location, end, FColor::Red, true, 0.0f, 0, 0.5f);
	
	return hit.Location;
}

void AAxe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
