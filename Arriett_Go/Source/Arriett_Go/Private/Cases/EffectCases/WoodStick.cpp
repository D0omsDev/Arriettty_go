// Fill out your copyright notice in the Description page of Project Settings.


#include "Cases/EffectCases/WoodStick.h"
#include "Components/AudioComponent.h"
#include "Pawns/Player/Julie.h"
#include "Kismet/GameplayStatics.h"
#include "Pawns/Enemies/Wolf.h"

AWoodStick::AWoodStick() {
	
	StickMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StickMesh"));
	StickMesh->SetupAttachment(RootComponent);

	CrackSound = CreateDefaultSubobject<UAudioComponent>(TEXT("CrackSound"));
	CrackSound->SetupAttachment(RootComponent);
	CrackSound->bAutoActivate = false;
}
void AWoodStick::ActivateEffect() {
		
		for (AGamePawn* Pawn : GetPawnsOnCase()) {
			AJulie* Julie = Cast<AJulie>(Pawn);
			if (Julie != nullptr) {
				if (!bIsActivated) {
				bIsActivated = true;
				CrackSound->Play();
				GetWorldTimerManager().SetTimer(ActivateTimerHandle, this, &AWoodStick::ActivateWolves, 1.0f, false);
				StickMesh->SetVisibility(false);
				return;
			}
		}
	}
	Super::ActivateEffect();
}

void AWoodStick::ActivateWolves() {
	TArray <AActor*> Wolves;
	UGameplayStatics::GetAllActorsOfClass(this, AWolf::StaticClass(), Wolves);
	for (AActor* Wolf : Wolves) {
		Cast<AWolf>(Wolf)->Awake();
	}
	Super::ActivateEffect();
}