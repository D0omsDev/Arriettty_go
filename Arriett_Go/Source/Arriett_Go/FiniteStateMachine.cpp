// Fill out your copyright notice in the Description page of Project Settings.



#include "FiniteStateMachine.h"
#include "State.h"

UFiniteStateMachine::UFiniteStateMachine(UObject* Owner)
{
	this->Owner = Owner;
	CurrentState = nullptr;
};

void UFiniteStateMachine::Update()
{
	if (CurrentState)
	{
		CurrentState->Update();
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

