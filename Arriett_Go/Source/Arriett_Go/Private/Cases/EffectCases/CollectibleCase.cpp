// Fill out your copyright notice in the Description page of Project Settings.


#include "Cases/EffectCases/CollectibleCase.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Misc/Arriett_GoGameMode.h"
#include "Pawns/GamePawn.h"
#include "Pawns/Player/Julie.h"

ACollectibleCase::ACollectibleCase()
{
	ConstructorHelpers::FObjectFinder<UStaticMesh>CollectibleShape(TEXT("StaticMesh'/Game/Cases/Meshes/Collectible.Collectible'"));
	CollectibleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Collectible"));
	if (CollectibleShape.Succeeded()) {
		CollectibleMesh->SetStaticMesh(CollectibleShape.Object);
		CollectibleMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
	CollectibleMesh->SetupAttachment(RootComponent);

	CollectSound = CreateDefaultSubobject<UAudioComponent>(TEXT("CollectSound"));
	CollectSound->SetupAttachment(RootComponent);
	CollectSound->bAutoActivate = false;
}

void ACollectibleCase::EnterCase(AGamePawn* Pawn)
{
	Super::EnterCase(Pawn);
	if (!bIsCollected) {
		bIsCollected = true;
		CollectSound->Play();
		if (Pawn->IsA(AJulie::StaticClass()))
		{
			AArriett_GoGameMode* GameMode = Cast<AArriett_GoGameMode>(UGameplayStatics::GetGameMode(this));
			if (GameMode)
			{
				GameMode->SetCollectible(true);
			}
			CollectibleMesh->SetVisibility(false);
		}
	}
}