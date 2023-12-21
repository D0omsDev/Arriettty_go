// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Cases/GridCase.h"
#include "CollectibleCase.generated.h"

/**
 * 
 */
UCLASS()
class ARRIETT_GO_API ACollectibleCase : public AGridCase
{
	GENERATED_BODY()

public :

	ACollectibleCase();

	// Adds the collectible pick up to the overriden function
	virtual void EnterCase(AGamePawn* Pawn) override;

protected :
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* CollectibleMesh = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SoundEffects")
	UAudioComponent* CollectSound;

	bool bIsCollected = false;

	
};
