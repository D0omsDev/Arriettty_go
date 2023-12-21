// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Cases/EffectCases/EffectGridCase.h"
#include "Cases/GridCase.h"
#include "EndCase.generated.h"

/**
 * 
 */
UCLASS()
class ARRIETT_GO_API AEndCase : public AEffectGridCase
{
	GENERATED_BODY()

	// Makes player win if he is on the case
	virtual void ActivateEffect() override;
	
};
