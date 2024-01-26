// Fill out your copyright notice in the Description page of Project Settings.


#include "WoodStick.h"
#include "Kismet/GameplayStatics.h"
#include "Julie.h"
#include "Wolf.h"

void AWoodStick::ActivateEffect() {
	for (AGamePawn* Pawn : GetPawnsOnCase()) {
		AJulie* Julie = Cast<AJulie>(Pawn);
		if (Julie != nullptr) {
			TArray <AActor*> Wolves;
			UGameplayStatics::GetAllActorsOfClass(this, AWolf::StaticClass(),Wolves);
			for (AActor* Wolf : Wolves) {
				Cast<AWolf>(Wolf)->Awake();
			}
		}
	}
	Super::ActivateEffect();
}