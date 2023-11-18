// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnNumber.h"
#include "Arrietty_Game_GameState.h"

void UTurnNumber::NativeConstruct()
{
	Super::NativeConstruct();
	auto World = GetWorld();
	if (World != nullptr) {
		auto GameState = World->GetGameState();
		if (GameState != nullptr) {
			A_GameState = Cast< AArrietty_Game_GameState>(GameState);
			if (A_GameState != nullptr) {
				A_GameState->OnTurnNumberChanged.AddUObject(this, &UTurnNumber::RefreshTurnNumber);
			}
		}
	}
	RefreshTurnNumber();
}

void UTurnNumber::RefreshTurnNumber()
{
	A_GameState = Cast< AArrietty_Game_GameState>(A_GameState);
	if (A_GameState != nullptr) {
		TurnNumber = A_GameState->GetNbTurn();
	}
	if (TurnNumberText != nullptr) {
		TurnNumberText->SetText(FText::FromString(FString::FromInt(TurnNumber)));
	}
}