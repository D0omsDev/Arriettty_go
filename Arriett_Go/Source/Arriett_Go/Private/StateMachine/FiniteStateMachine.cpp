// Fill out your copyright notice in the Description page of Project Settings.



#include "StateMachine/FiniteStateMachine.h"
#include "StateMachine/State.h"

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
	CurrentState->EnterState();
};
