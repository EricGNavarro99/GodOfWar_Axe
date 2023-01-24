// Created by Eric G. Navarro

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Axe.generated.h"

UCLASS()
class GODOFWAR_AXE_API AAxe : public AActor
{
	GENERATED_BODY()
	
public:
	AAxe();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere) class USceneComponent* _root;
	UPROPERTY(VisibleAnywhere) class UArrowComponent* _arrow;
	UPROPERTY(VisibleAnywhere) class UStaticMeshComponent* _staticMesh;

	UPROPERTY(EditAnywhere, Category = "Editor options", meta = (DisplayName = "Show hit location")) bool _bShowHitLocation = false;
	UPROPERTY(EditAnywhere, Category = "Axe options", meta = (ClampMin = 0.0f, ClampMax = 50.0f)) float _axeRotationSpeed = 10.0f;
	UPROPERTY(EditAnywhere, Category = "Axe options", meta = (ClampMin = 0.0f, ClampMax = 100.0f)) int32 _axeInitialMovementSpeed = 10;

protected:
	virtual void BeginPlay() override;

private:
	void SetComponents();
	void MoveAxeToHitLocation(float deltaTime);
	void RotateAxeToHitLocation();

	FVector HitLocation();
	FVector _initialHitLocation;

	class APlayerCharacter* _player = nullptr;
	class AController* _playerController = nullptr;

	bool _bStopRotating = false;
	
};
