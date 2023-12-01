// Fill out your copyright notice in the Description page of Project Settings.



#include "FiniteStateMachine.h"
#include "State.h"

UFiniteStateMachine::UFiniteStateMachine(UObject* Owner)
{
	this->Owner = Owner;
	CurrentState = nullptr;
};

void UFiniteStateMachine::UpdateState()
{
	if (CurrentState)
	{
		CurrentState->UpdateState();
	}
};

void UFiniteStateMachine::ChangeState(UState* NewState)
{
	if (CurrentState)
	{
		CurrentState->ExitState();
	}
	CurrentState = NewState;
	UE_LOG (LogTemp, Warning, TEXT("ChangeState %s"), *(NewState -> GetName()));
	CurrentState->EnterState();
};

