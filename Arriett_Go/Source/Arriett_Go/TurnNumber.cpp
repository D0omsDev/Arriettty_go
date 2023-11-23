// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnNumber.h"
#include "Kismet/GameplayStatics.h"
#include "Arriett_GoGameMode.h"

void UTurnNumber::NativeConstruct()
{
	Super::NativeConstruct();
	auto World = GetWorld();
	if (World != nullptr) {
		auto GameState = World->GetGameState();
		if (UGameplayStatics::GetGameMode(GetWorld())) {
			A_GameMode = Cast< AArriett_GoGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
			if (A_GameMode != nullptr) {
				A_GameMode->OnTurnNumberChanged.AddUObject(this, &UTurnNumber::RefreshTurnNumber);
			}
		}
	}
	RefreshTurnNumber();
}

void UTurnNumber::RefreshTurnNumber()
{
	A_GameMode = Cast< AArriett_GoGameMode>(A_GameMode);
	if (A_GameMode != nullptr) {
		TurnNumber = A_GameMode->GetNbTurn();
	}
	if (TurnNumberText != nullptr) {
		TurnNumberText->SetText(FText::FromString(FString::FromInt(TurnNumber)));
	}
}