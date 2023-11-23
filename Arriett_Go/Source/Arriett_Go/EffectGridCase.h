// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GridCase.h"
#include "EffectGridCase.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class ARRIETT_GO_API AEffectGridCase : public AGridCase
{
	GENERATED_BODY()
	
public :
	virtual void ActivateEffect() {};


};
