// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GamePawn.h"
#include "EnemyPawn.generated.h"

/**
 * 
 */
UCLASS()
class ARRIETT_GO_API AEnemyPawn : public AGamePawn
{
	GENERATED_BODY()

public :
	void EnemyAction();
	
};
