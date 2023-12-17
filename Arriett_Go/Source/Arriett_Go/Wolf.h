// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyPawn.h"
#include "Wolf.generated.h"

/**
 *
 */
DECLARE_DELEGATE(FOnWolfTurnEnd)
UCLASS()
class ARRIETT_GO_API AWolf : public AEnemyPawn
{
	GENERATED_BODY()
public:

	AWolf();
	void Awake();


protected:
	TArray<AGridCase*> Path;

	void Djikstra(AGridCase* Start, AGridCase* End);
	virtual void EnemyAction() override;
	virtual void UpdateCasesColor() override;
	void WolfAttack();
	virtual void BeginPlay() override;
	virtual void TimelineFinishedCallback() override;
	void WolfTurnEnd();
	virtual void EndAction() override;
	virtual void MoveToCase(AGridCase* Case) override;
	bool bIsAwaken = false;

	/***********************************************************************
	*				AUDIO FUNCTIONS			                               *
	***********************************************************************/

	virtual void SilenceSounds();

	/***********************************************************************
	*				AUDIO VARIABLES							               *
	***********************************************************************/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SoundEffects")
	UAudioComponent* WolfSleepingSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SoundEffects")
	UAudioComponent* WolfWakingSound;

	FOnWolfTurnEnd OnWolfTurnEnd;
};
