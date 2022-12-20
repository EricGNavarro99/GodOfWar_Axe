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

	UPROPERTY (VisibleAnywhere, BlueprintReadWrite, meta = (DisplayName = "Is Armed")) bool _bIsArmed = false;
	UPROPERTY (VisibleAnywhere, BlueprintReadWrite, meta = (DisplayName = "Is Walking")) bool _bIsWalking = false;

protected:
	virtual void BeginPlay() override;

private:

	void MoveForward(float axisValue);
	void MoveRight(float axisValue);
	void LookUpRate(float axisValue);
	void LookRightRate(float axisValue);

	void AssembleCharacter();
	void CheckPlayerMovement();

	void SetComponents();

};
