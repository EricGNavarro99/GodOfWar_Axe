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

protected:
	virtual void BeginPlay() override;

};
