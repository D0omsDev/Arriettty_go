// Fill out your copyright notice in the Description page of Project Settings.


#include "Cases/EffectCases/EndCase.h"
#include "Misc/Arriett_GoGameMode.h"
#include "Pawns/Player/Julie.h"

void AEndCase::ActivateEffect() {
	for (AGamePawn * Pawn : PawnsOnCase)
	{
		AJulie * Julie = Cast<AJulie>(Pawn);
		if (Julie)
		{
			AArriett_GoGameMode * GameMode = Cast<AArriett_GoGameMode>(GetWorld()->GetAuthGameMode());
			if (GameMode)
			{
				GameMode->PlayerWin();
			}
		}
	}
	Super::ActivateEffect();
}