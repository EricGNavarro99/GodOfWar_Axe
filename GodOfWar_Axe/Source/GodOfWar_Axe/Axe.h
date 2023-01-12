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

	UPROPERTY(VisibleAnywhere) class UStaticMeshComponent* _axeStaticMesh;
	UPROPERTY(VisibleAnywhere) class UProjectileMovementComponent* _projectileMovement;
	UPROPERTY(VisibleAnywhere) class URotatingMovementComponent* _rotatingMovement;

protected:
	virtual void BeginPlay() override;

private:
	void SetComponents();

};
