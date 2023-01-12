// Created by Eric G. Navarro

#include "Axe.h"
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
	
}

void AAxe::SetComponents()
{
	_axeStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AxeStaticMesh"));
	_projectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	_rotatingMovement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingMovement"));

	_axeStaticMesh->SetWorldScale3D(FVector(0.08f, 0.08f, 0.08f));

	_projectileMovement->InitialSpeed = 1500.0f;
	_projectileMovement->MaxSpeed = 3000.0f;
	_projectileMovement->ProjectileGravityScale = 0.1f;

	_rotatingMovement->RotationRate = FRotator(0.1f, -700.0f, 180.0f);
}

void AAxe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

