// Fill out your copyright notice in the Description page of Project Settings.


#include "EndCase.h"
#include "Julie.h"
#include "Arriett_GoGameMode.h"

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