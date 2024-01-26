// Fill out your copyright notice in the Description page of Project Settings.


#include "State.h"
#include "Arriett_GoGameMode.h"
#include "GridCase.h"
#include "Julie.h"
#include "FiniteStateMachine.h"

UState_GameMode::UState_GameMode(AArriett_GoGameMode* GamemodeBase) {
	Gamemode = GamemodeBase;
}

void UState_GameMode::EnterState() {

}

void UState_GameMode::UpdateState() {

}

void UState_GameMode::ExitState() {

}

void UState_GameModeInputWait::EnterState() {
	Gamemode -> SetSelectedCase(nullptr);
	UpdateState();
}


void UState_GameModeInputWait::UpdateState() {
	if (Gamemode->GetSelectedCase() != nullptr) {
		auto State = NewObject<UState_GameModePlayerMovement>();
		State -> SetGamemode(Gamemode);
		State -> SetSelectedCase(Gamemode->GetSelectedCase());
		Gamemode->GetFSM()->ChangeState(State);
	}
}
void UState_GameModeInputWait::ExitState() {
	Gamemode->SetSelectedCase(nullptr);
}

UState_GameModePlayerMovement::UState_GameModePlayerMovement(AArriett_GoGameMode* GamemodeBase, AGridCase* NewCase) {
	Gamemode = GamemodeBase;
	SelectedCase = NewCase;
}

void UState_GameModePlayerMovement::EnterState() {
	Gamemode->ResetPlayerMovement();
	Gamemode->GetPlayerPawn() -> MoveToCase(SelectedCase);
	UpdateState();
}


void UState_GameModePlayerMovement::UpdateState() {
	if (Gamemode->GetPlayerMovementEnded()) {
		auto State = NewObject<UState_GameModeCaseEffect>();
		State->SetGamemode(Gamemode);
		State ->SetNextState(UState_GameModeEnemyMovement::StaticClass());
		Gamemode->GetFSM()->ChangeState(State);
	}
}
void UState_GameModePlayerMovement::ExitState() {
	Gamemode -> ResetPlayerMovement();
}

void UState_GameModeCaseEffect::EnterState() {
	Gamemode->ResetEffectGridCasesToActivate();
	Gamemode -> EffectGridCasesActions();
	UpdateState();

}


void UState_GameModeCaseEffect::UpdateState() {
	if (Gamemode->GetEffectGridCasesToActivate().IsEmpty()) {
		auto State = NewObject<UState_GameMode>(Gamemode,NextState);
		State->SetGamemode(Gamemode);
		Gamemode->GetFSM()->ChangeState(State);
	}
	UE_LOG(LogTemp, Warning, TEXT("UpdateState EC size %d"), Gamemode -> GetEffectGridCasesToActivate().Num()	);
}
void UState_GameModeCaseEffect::ExitState() {
	Gamemode -> ResetEffectGridCasesToActivate();
}


void UState_GameModeEnemyMovement::EnterState() {
	Gamemode->ResetEnemiesToMove();
	Gamemode->EnemiesActions();
	UpdateState();
}


void UState_GameModeEnemyMovement::UpdateState() {
	UE_LOG(LogTemp, Warning, TEXT("UpdateState EM size %d"), Gamemode->GetEnemiesToMove().Num());
	if (Gamemode->GetEnemiesToMove().IsEmpty()) {

		auto State = NewObject<UState_GameModeCaseEffect>();
		State->SetGamemode(Gamemode);
		State->SetNextState(UState_GameModeEndTurn::StaticClass());
		Gamemode->GetFSM()->ChangeState(State);
	}
}
void UState_GameModeEnemyMovement::ExitState() {
	Gamemode->ResetEnemiesToMove();
}

void UState_GameModeEndTurn::EnterState() {
	Gamemode -> AddTurn();
	Gamemode->ColorGrid();
	Gamemode -> ResetTurnActivables();
	UpdateState();
}


void UState_GameModeEndTurn::UpdateState() {
	auto State = NewObject<UState_GameModeInputWait>();
	State->SetGamemode(Gamemode);
	Gamemode->GetFSM()->ChangeState(State);
}
void UState_GameModeEndTurn::ExitState() {
}

