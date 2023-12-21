// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawns/Enemies/EnemyPawn.h"
#include "Components/AudioComponent.h"
#include "Pawns/Player/Julie.h"

AEnemyPawn::AEnemyPawn() {
	PrimaryActorTick.bCanEverTick = true;
	AttackSound = CreateDefaultSubobject<UAudioComponent>(TEXT("AttackSound"));
	AttackSound->SetupAttachment(RootComponent);
	AttackSound->bAutoActivate = false;

}

void AEnemyPawn::CallKillTimer() {
	GetWorldTimerManager().ClearTimer(KillTimerHandle);
	if (OnActionEnded.IsBound()) {
		OnActionEnded.Broadcast(this);
	}
}

void AEnemyPawn::EnemyAction() {

}

