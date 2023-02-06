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

	UPROPERTY (VisibleAnywhere) class USceneComponent* _root;
	UPROPERTY (VisibleAnywhere) class UArrowComponent* _arrow;
	UPROPERTY (VisibleAnywhere) class UStaticMeshComponent* _staticMesh;
	UPROPERTY (VisibleAnywhere) class USphereComponent* _trigger;
 
	UPROPERTY (VisibleAnywhere) class UProjectileMovementComponent* _projectileComponent;
	UPROPERTY (VisibleAnywhere) class URotatingMovementComponent* _rotatingComponent;
 
	UPROPERTY (EditAnywhere, Category = "Axe Options", meta = (ClampMin = 0.0f, ClampMax = 5000.0f)) float _rotationSpeed = 2500.0f;
	UPROPERTY (EditAnywhere, Category = "Axe Options", meta = (ClampMin = 0.0f, ClampMax = 5000.0f)) float _movementSpeed = 2500.0f;
	
	void ReturnAxeToPlayer();

protected:
	virtual void BeginPlay() override;

private:
	void SetComponents();
	void EnableProjectileMovementComponent(bool bEnable);
	void EnableRotatingMovementComponent(bool bEnable);

	UFUNCTION() void StickAxe(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);
	void RelocateStickedAxe();

	class APlayerCharacter* _player = nullptr;
	class AController* _playerController = nullptr;

	FHitResult _hit;
	FHitResult HitSurface();

	FVector CreateBQCurve(float time, FVector axeStickedLocation, FVector playerCurvePoint, FVector axeHandLocation);
	FVector _axeStickedLocation = FVector(0.0f, 0.0f, 0.0f);

	float _timer = 0.0f;
	FTimerHandle _timerHandle;
	void ReturnAxeToPlayer_TimerMethod();

	void SelfDestroy();
	
};
