// Created by Eric G. Navarro

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class GODOFWAR_AXE_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	APlayerCharacter();

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UPROPERTY (EditAnywhere, Category = "Gamepad", meta = (ClampMin = 10, ClampMax = 120)) float _gamepadSensivity = 70.f;

	UPROPERTY (VisibleAnywhere) class UCameraComponent* _camera;
	UPROPERTY (VisibleAnywhere) class USpringArmComponent* _springArm;
	UPROPERTY (VisibleAnywhere) class UStaticMeshComponent* _rightHandAxe;
	UPROPERTY (VisibleAnywhere) class UStaticMeshComponent* _spineAxe;
	UPROPERTY (VisibleAnywhere) class USphereComponent* _curvePoint;

	UPROPERTY(EditAnywhere, Category = "Animation Montages") UAnimMontage* _armAxeAnimMontage;
	UPROPERTY(EditAnywhere, Category = "Animation Montages") UAnimMontage* _disarmAxeAnimMontage;
	UPROPERTY(EditAnywhere, Category = "Animation Montages") UAnimMontage* _throwAxeAnimMontage;

	UPROPERTY(EditAnywhere, Category = "Camera Shake Animation") TSubclassOf<class UCameraShakeBase> _cameraShake;
 
	UPROPERTY(EditAnywhere, Category = "Axe") TSubclassOf<class AAxe> _axe;

	UPROPERTY(EditAnywhere, Category = "Point Options") float _initialTargetArmLenght = 100.0f;
	UPROPERTY(EditAnywhere, Category = "Point Options") float _initialSocketOffsetY = 65.0f;
	UPROPERTY(EditAnywhere, Category = "Point Options") float _pointingTargetArmLenght = 85.0f;
	UPROPERTY(EditAnywhere, Category = "Point Options") float _pointingSocketOffsetY = 50.0f;

	UPROPERTY(EditAnywhere, Category = "Camera Pitch Limit") float _cameraMinPitchRotation = -24.0f;
	UPROPERTY(EditAnywhere, Category = "Camera Pitch Limit") float _cameraMaxPitchRotation = 24.0f;

	UPROPERTY(EditAnywhere, Category = "Editor Options", meta = (Display = "Show player status")) bool _bShowPlayerStatus = false;

	UPROPERTY (VisibleAnywhere, BlueprintReadWrite, Category = "Player Status", meta = (DisplayName = "Is armed")) bool _bIsArmed = false;
	UPROPERTY (VisibleAnywhere, BlueprintReadWrite, Category = "Player Status", meta = (DisplayName = "Is walking")) bool _bIsWalking = false;
	UPROPERTY (VisibleAnywhere, BlueprintReadWrite, Category = "Player Status", meta = (DisplayName = "Is pointing")) bool _bIsPointing = false;
	UPROPERTY (VisibleAnywhere, BlueprintReadWrite, Category = "Player Status", meta = (DisplayName = "Just throw axe")) bool _bJustThrowAxe = false;
	UPROPERTY (VisibleAnywhere, BlueprintReadWrite, Category = "Player Status", meta = (DisplayName = "Call axe")) bool _bCallAxe = false;
	UPROPERTY (VisibleAnywhere, BlueprintReadWrite, Category = "Player Status", meta = (DisplayName = "Have axe")) bool _bHaveAxe = true;

	UFUNCTION(BlueprintCallable) void EquipAxe(bool bIsArmed);
	UFUNCTION(BlueprintCallable) void MakeHandAxeAppearDisappear(bool bMakeDisappear);
	UFUNCTION(BlueprintCallable) void SpawnAxe();

	void PlayCameraShake();

protected:
	virtual void BeginPlay() override;

private:

	float _timer = 0.4f;
	FTimerHandle _timerHandle;

	void MoveForward(float axisValue);
	void MoveRight(float axisValue);
	void LookUpRate(float axisValue);
	void LookRightRate(float axisValue);

	void BlockCamera();

	void Point();
	void StopPointing();
	void MoveCameraWhenIsPointing(float deltaTime);

	void AssembleCharacter();
	void CheckPlayerMovement();

	void ThrowAxeStart();
	void ThrowAxeEnd();
	void CallAxe();

	void SetComponents();

	void ShowPlayerStatusInScreen();

	void PlayCameraShake_TimerMethod();
};