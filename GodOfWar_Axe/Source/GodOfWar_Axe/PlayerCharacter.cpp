// Created by Eric G. Navarro

#include "PlayerCharacter.h"
#include "Axe.h"
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

void APlayerCharacter::MakeHandAxeAppearDisappear(bool bMakeDisappear)
{
	_rightHandAxe->SetVisibility(!bMakeDisappear);
}

void APlayerCharacter::SpawnAxe()
{
	if (_axe != nullptr) 
	{
		APlayerController* playerController = Cast<APlayerController>(Controller);
		GetWorld()->SpawnActor<AAxe>(_axe, _rightHandAxe->GetComponentLocation(), FRotator(-playerController->PlayerCameraManager->GetCameraRotation().Pitch, _rightHandAxe->GetComponentRotation().Yaw, _rightHandAxe->GetComponentRotation().Roll));
	}
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	BlockCamera();
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

void APlayerCharacter::BlockCamera()
{
	APlayerController* playerController = Cast<APlayerController>(Controller);
	if (playerController != nullptr && playerController->PlayerCameraManager)
	{
		playerController->PlayerCameraManager->ViewPitchMax = _cameraMaxPitchRotation;
		playerController->PlayerCameraManager->ViewPitchMin = _cameraMinPitchRotation;
	}
}

void APlayerCharacter::Point()
{
	if (!_bIsArmed) return;

	_bIsPointing = true;
}

void APlayerCharacter::StopPointing()
{
	if (!_bIsArmed) return;

	_bIsPointing = false;
}

void APlayerCharacter::MoveCameraWhenIsPointing(float deltaTime)
{
	if (!_bIsArmed)
	{
		if (_springArm->TargetArmLength != _initialTargetArmLenght && _springArm->SocketOffset.Y != _initialSocketOffsetY)
		{
			_springArm->TargetArmLength = FMath::FInterpTo(_springArm->TargetArmLength, _initialTargetArmLenght, deltaTime, 0.5f);
			_springArm->SocketOffset.Y = FMath::FInterpTo(_springArm->SocketOffset.Y, _initialSocketOffsetY, deltaTime, 0.5f);
		}
		else return;			
	}
	else
	{
		if (_bIsPointing)
		{
			_springArm->TargetArmLength = FMath::FInterpTo(_springArm->TargetArmLength, _pointingTargetArmLenght, deltaTime, 0.5f);
			_springArm->SocketOffset.Y = FMath::FInterpTo(_springArm->SocketOffset.Y, _pointingSocketOffsetY, deltaTime, 0.5f);
		}
		else
		{
			_springArm->TargetArmLength = FMath::FInterpTo(_springArm->TargetArmLength, _initialTargetArmLenght, deltaTime, 0.5f);
			_springArm->SocketOffset.Y = FMath::FInterpTo(_springArm->SocketOffset.Y, _initialSocketOffsetY, deltaTime, 0.5f);
		}
	}
}

void APlayerCharacter::AssembleCharacter()
{
	if (GetMesh()->GetAnimInstance()->Montage_IsPlaying(_disarmAxeAnimMontage) || GetMesh()->GetAnimInstance()->Montage_IsPlaying(_armAxeAnimMontage) || _bIsPointing || !_bHavePlayerTheAxe) return;
	
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

void APlayerCharacter::ThrowAxeStart()
{
	if (GetMesh()->GetAnimInstance()->Montage_IsPlaying(_throwAxeAnimMontage) || !_bHavePlayerTheAxe || (!_bIsArmed && !_bIsPointing)) return;

	_bJustThrowAxe = true;
	_bHavePlayerTheAxe = false;

	if (!GetMesh()->GetAnimInstance()->Montage_IsPlaying(_throwAxeAnimMontage)) PlayAnimMontage(_throwAxeAnimMontage, 1.0f, TEXT("NONE"));

	_bIsArmed = false;
	_bIsPointing = false;
}

void APlayerCharacter::ThrowAxeEnd()
{
	_bJustThrowAxe = false;
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

void APlayerCharacter::ShowPlayerStatusInScreen()
{
	if (!_bShowPlayerStatus) return;

	GEngine->AddOnScreenDebugMessage(-1, 0.001f, _bIsArmed ? FColor::Green : FColor::Red, TEXT("> Is Armed"));
	GEngine->AddOnScreenDebugMessage(-1, 0.001f, _bIsWalking ? FColor::Green : FColor::Red, TEXT("> Is Walking"));
	GEngine->AddOnScreenDebugMessage(-1, 0.001f, _bIsPointing ? FColor::Green : FColor::Red, TEXT("> Is Pointing"));
	GEngine->AddOnScreenDebugMessage(-1, 0.001f, _bHavePlayerTheAxe ? FColor::Green : FColor::Red, TEXT("> Have Player The Axe"));
	GEngine->AddOnScreenDebugMessage(-1, 0.001f, _bJustThrowAxe ? FColor::Green : FColor::Red, TEXT("> Just Throw Axe"));
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ShowPlayerStatusInScreen();
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

		PlayerInputComponent->BindAction(TEXT("Throw"), IE_Pressed, this, &APlayerCharacter::ThrowAxeStart);
		PlayerInputComponent->BindAction(TEXT("Throw"), IE_Released, this, &APlayerCharacter::ThrowAxeEnd);
	}
}
