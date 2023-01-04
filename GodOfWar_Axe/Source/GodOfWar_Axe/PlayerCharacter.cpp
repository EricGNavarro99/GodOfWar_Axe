// Created by Eric G. Navarro

#include "PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	SetComponents();
}

void APlayerCharacter::EquipAxe(bool bIsArmed)
{
	if (_bIsPointing) return;

	_spineAxe->SetVisibility(bIsArmed ? false : true);
	_rightHandAxe->SetVisibility(bIsArmed ? true : false);
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	EquipAxe(false);
}

void APlayerCharacter::MoveForward(float axisValue)
{
	AddMovementInput(GetActorForwardVector() * axisValue);
	CheckPlayerMovement();
}

void APlayerCharacter::MoveRight(float axisValue)
{
	AddMovementInput(GetActorRightVector() * axisValue);
	CheckPlayerMovement();
}

void APlayerCharacter::LookUpRate(float axisValue)
{
	AddControllerPitchInput(axisValue * _gamepadSensivity * GetWorld()->GetDeltaSeconds());
}

void APlayerCharacter::LookRightRate(float axisValue)
{
	AddControllerYawInput(axisValue * _gamepadSensivity * GetWorld()->GetDeltaSeconds());
}

void APlayerCharacter::Point()
{
	if (_bIsArmed == false) return;

	_bIsPointing = true;
}

void APlayerCharacter::StopPointing()
{
	if (_bIsArmed == false) return;

	_bIsPointing = false;
}

void APlayerCharacter::MoveCameraWhenIsPointing(float deltaTime)
{
	if (!_bIsArmed) return;

	if (_bIsPointing && _bIsArmed)
	{
		_springArm->TargetArmLength = FMath::FInterpTo(_springArm->TargetArmLength, _pointingTargetArmLenght, deltaTime, 1.0f);
		_springArm->SocketOffset.Y = FMath::FInterpTo(_springArm->SocketOffset.Y, _pointingSocketOffsetY, deltaTime, 1.0f);

	}

	if (!_bIsPointing && _bIsArmed)
	{
		_springArm->TargetArmLength = FMath::FInterpTo(_springArm->TargetArmLength, _initialTargetArmLenght, deltaTime, 1.0f);
		_springArm->SocketOffset.Y = FMath::FInterpTo(_springArm->SocketOffset.Y, _initialSocketOffsetY, deltaTime, 1.0f);
	}
}

void APlayerCharacter::AssembleCharacter()
{
	if (GetMesh()->GetAnimInstance()->Montage_IsPlaying(_disarmAxeAnimMontage) || GetMesh()->GetAnimInstance()->Montage_IsPlaying(_armAxeAnimMontage) || _bIsPointing) return;
	
	_bIsArmed = !_bIsArmed ? true : false;

	if (_armAxeAnimMontage == nullptr || _disarmAxeAnimMontage == nullptr) return;

	if (_bIsArmed)
	{
		if (!GetMesh()->GetAnimInstance()->Montage_IsPlaying(_disarmAxeAnimMontage)) PlayAnimMontage(_disarmAxeAnimMontage, 1.0f, TEXT("NONE"));
	}
	else
	{
		if (!GetMesh()->GetAnimInstance()->Montage_IsPlaying(_armAxeAnimMontage)) PlayAnimMontage(_armAxeAnimMontage, 1.0f, TEXT("NONE"));
	}
}

void APlayerCharacter::CheckPlayerMovement()
{
	_bIsWalking = (GetVelocity() != FVector(0.0f, 0.0f, 0.0f)) ? true : false;
}

void APlayerCharacter::SetComponents()
{
	_springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	_rightHandAxe = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightHandAxe"));
	_spineAxe = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpineAxe"));

	_springArm->SetupAttachment(RootComponent);
	_camera->SetupAttachment(_springArm, USpringArmComponent::SocketName);
	_rightHandAxe->SetupAttachment(GetMesh(), FName("RightHandSocket"));
	_spineAxe->SetupAttachment(GetMesh(), FName("SpineAxe"));

	_springArm->bUsePawnControlRotation = 1;
	_springArm->SetWorldLocation(FVector(0.0f, 0.0f, 50.0f));
	_springArm->TargetArmLength = _initialTargetArmLenght;
	_springArm->SocketOffset.Y = _initialSocketOffsetY;
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MoveCameraWhenIsPointing(DeltaTime);
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

		PlayerInputComponent->BindAction(TEXT("Assemble"), IE_Released, this, &APlayerCharacter::AssembleCharacter);

		PlayerInputComponent->BindAction(TEXT("Point"), IE_Pressed, this, &APlayerCharacter::Point);
		PlayerInputComponent->BindAction(TEXT("Point"), IE_Released, this, &APlayerCharacter::StopPointing);
	}

}
