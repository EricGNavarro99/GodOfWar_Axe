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

protected:
	virtual void BeginPlay() override;

private:
	void SetComponents();
	FVector HitLocation();
	class APlayerCharacter* _player = nullptr;
	class AController* _playerController = nullptr;
};
