// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GridCase.h"
#include "EffectGridCase.h"
#include "EndCase.generated.h"

/**
 * 
 */
UCLASS()
class ARRIETT_GO_API AEndCase : public AEffectGridCase
{
	GENERATED_BODY()


	virtual void ActivateEffect() override;
	
};
