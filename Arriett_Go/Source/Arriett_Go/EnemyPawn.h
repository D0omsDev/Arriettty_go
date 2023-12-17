// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GamePawn.h"
#include "EnemyPawn.generated.h"

/**
 * 
 */
class AJulie;
UCLASS()
class ARRIETT_GO_API AEnemyPawn : public AGamePawn
{
	GENERATED_BODY()

public :
AEnemyPawn();
	virtual void EnemyAction();

protected : 
	AJulie* Julie = nullptr;

	FTimerHandle KillTimerHandle;

	void CallKillTimer();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SoundEffects")
	UAudioComponent* AttackSound;

	
};
