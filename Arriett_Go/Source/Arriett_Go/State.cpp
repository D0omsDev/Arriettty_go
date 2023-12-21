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
		UState_GameMode * State = nullptr;
		if (NextState) {
			State = NextState;
		}
		else {
			auto NewStateTMP = NewObject<UState_GameModePlayerMovement>();
			NewStateTMP -> SetGamemode(Gamemode);
			NewStateTMP -> SetSelectedCase(Gamemode->GetSelectedCase());
			State = NewStateTMP;
		}
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
		UState_GameMode* State = nullptr;
		if (NextState) {
			State = NextState;
		}
		else {
			auto NewStateTmp = NewObject<UState_GameModeCaseEffect>();
			NewStateTmp->SetGamemode(Gamemode);
			NewStateTmp->SetNextStateClass(UState_GameModeEnemyMovement::StaticClass());
			State = NewStateTmp;
		}
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
		UState_GameMode* State = nullptr;
		if (NextState) {
			State = NextState;
		}
		else {
			UState_GameMode *  NewStateTMP = NewObject<UState_GameMode>(Gamemode, NextStateClass);
			NewStateTMP->SetGamemode(Gamemode);
			State = NewStateTMP;
		}
		Gamemode->GetFSM()->ChangeState(State);
	}
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
	if (Gamemode->GetEnemiesToMove().IsEmpty()) {
		UState_GameMode* State = nullptr;
		if (NextState) {
			State = NextState;
		}
		else {
			//Print NextState null
			auto NewStateTMP = NewObject<UState_GameModeCaseEffect>();
			NewStateTMP->SetGamemode(Gamemode);
			NewStateTMP->SetNextStateClass(UState_GameModeEndTurn::StaticClass());
			State = NewStateTMP;
		}
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

	UState_GameMode* State = nullptr;
	if (NextState) {
		State = NextState;
	}
	else {
		auto NewStateTMP = NewObject<UState_GameModeInputWait>();
		NewStateTMP->SetGamemode(Gamemode);
		State = NewStateTMP;
	}
	Gamemode->GetFSM()->ChangeState(State);
}
void UState_GameModeEndTurn::ExitState() {
}

void UState_GameModeEndGame::EnterState() {
	if (bIsWin) {
		Gamemode->WinGame();
	}
	else {
		Gamemode->LoseGame();
	}
}


