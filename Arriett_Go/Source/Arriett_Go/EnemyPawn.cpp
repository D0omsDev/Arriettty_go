// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyPawn.h"
#include "Julie.h"
#include "Components/AudioComponent.h"

AEnemyPawn::AEnemyPawn() {
	PrimaryActorTick.bCanEverTick = true;
	AttackSound = CreateDefaultSubobject<UAudioComponent>(TEXT("AttackSound"));
	AttackSound->SetupAttachment(RootComponent);
	AttackSound->bAutoActivate = false;

}

void AEnemyPawn::EnemyAction() {
	UE_LOG(LogTemp, Warning, TEXT("EnemyAction %s"), *GetName());

}

void AEnemyPawn::CallKillTimer() {
	if (Julie != nullptr && Julie->IsValidLowLevel()) {
		return;
	}
	else {
		GetWorldTimerManager().ClearTimer(KillTimerHandle);
		Super::TimelineFinishedCallback();
	}
}