// Fill out your copyright notice in the Description page of Project Settings.


#include "Cases/EffectCases/EffectGridCase.h"


void AEffectGridCase::ActivateEffect() {
	if (OnGridEffectCompleted.IsBound()) {
		OnGridEffectCompleted.Execute(this);
	}
};

bool AEffectGridCase::IsTurnActivable() { 
	return bIsTurnActivable;
}

void AEffectGridCase::ResetTurnActivable() {
	bIsTurnActivable = true;
}