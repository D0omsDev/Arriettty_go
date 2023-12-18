// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EffectGridCase.h"
#include "WoodStick.generated.h"

/**
 * 
 */
UCLASS()
class ARRIETT_GO_API AWoodStick : public AEffectGridCase
{
	GENERATED_BODY()
	
public :
	AWoodStick();
	virtual void ActivateEffect() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StickMesh")
	UStaticMeshComponent* StickMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SoundEffects")
	UAudioComponent* CrackSound;

protected : 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ActivateBool")
	bool bIsActivated = false;

	void ActivateWolves();

	FTimerHandle ActivateTimerHandle;
};
