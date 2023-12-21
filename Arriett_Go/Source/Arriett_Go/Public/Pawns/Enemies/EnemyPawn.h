// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pawns/GamePawn.h"
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
	// End the action of the pawn affter he has attacked
	void CallKillTimer();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SoundEffects")
	UAudioComponent* AttackSound;

protected : 
	// Target of the pending attack
	AJulie* Julie = nullptr;

	// Timer to end the action of the pawn affter he has attacked
	FTimerHandle KillTimerHandle;

	
};
