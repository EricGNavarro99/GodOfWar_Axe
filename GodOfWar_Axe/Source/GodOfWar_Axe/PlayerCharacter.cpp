// Created by Eric G. Navarro

#include "PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	SetComponents();
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerCharacter::MoveForward(float axisValue)
{
	AddMovementInput(GetActorForwardVector() * axisValue);
}

void APlayerCharacter::MoveRight(float axisValue)
{
	AddMovementInput(GetActorRightVector() * axisValue);
}

void APlayerCharacter::LookUpRate(float axisValue)
{
	AddControllerPitchInput(axisValue * _gamepadSensivity * GetWorld()->GetDeltaSeconds());
}

void APlayerCharacter::LookRightRate(float axisValue)
{
	AddControllerYawInput(axisValue * _gamepadSensivity * GetWorld()->GetDeltaSeconds());
}

void APlayerCharacter::SetComponents()
{
	_springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	_springArm->SetupAttachment(RootComponent);
	_camera->SetupAttachment(_springArm, USpringArmComponent::SocketName);

	_springArm->bUsePawnControlRotation = 1;
	_springArm->SetWorldLocation(FVector(0.0f, 0.0f, 50.0f));
	_springArm->TargetArmLength = 170.0f;
	_springArm->SocketOffset.Y = 70.0f;
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (PlayerInputComponent)
	{
		PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &APlayerCharacter::MoveForward);
		PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &APlayerCharacter::MoveRight);
		PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &APawn::AddControllerPitchInput);
		PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &APawn::AddControllerYawInput);

		PlayerInputComponent->BindAxis(TEXT("LookUpRate"), this, &APlayerCharacter::LookUpRate);
		PlayerInputComponent->BindAxis(TEXT("LookRightRate"), this, &APlayerCharacter::LookRightRate);
	}

}
