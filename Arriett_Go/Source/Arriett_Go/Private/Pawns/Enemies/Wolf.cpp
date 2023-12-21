// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawns/Enemies/Wolf.h"
#include "Cases/GridCase.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Misc/Arriett_GoGameMode.h"
#include "Pawns/Player/Julie.h"


AWolf::AWolf() {
	PrimaryActorTick.bCanEverTick = true;
	bIsAwaken = false;

	WolfSleepingSound = CreateDefaultSubobject<UAudioComponent>(TEXT("WolfSleepingSound"));
	WolfSleepingSound->SetupAttachment(RootComponent);
	WolfSleepingSound->bAutoActivate = true;


	WolfWakingSound = CreateDefaultSubobject<UAudioComponent>(TEXT("WolfWakingSound"));
	WolfWakingSound->SetupAttachment(RootComponent);
	WolfWakingSound->bAutoActivate = false;

	WolfMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WolfMesh"));
	WolfMesh->SetupAttachment(RootComponent);

}
int32 FindMin(TArray<int32> Array) {
	int index = -1;
	int value = MAX_int32;
	for (int i = 0; i < Array.Num(); i++) {
		if (Array[i] <= value) {
			index = i;
			value = Array[i];
		}
	}
	return index;
}

void AWolf::BeginPlay() {
	Super::BeginPlay();
	MovementType = EPawnMovementType::PawnMovementType_Travel;
}

void AWolf::Djikstra(AGridCase* Start, AGridCase* End) {
	TArray<AGridCase*> Cases;
	TArray<AGridCase*> CasesAnalyzed;
	TArray<AGridCase*> Precedent;
	TArray<int32> Distance;
	auto Gamemode = UGameplayStatics::GetGameMode(this);
	auto A_GameMode = Cast< AArriett_GoGameMode>(Gamemode);
	Cases = A_GameMode->GetGridCases();
	Distance.Init(MAX_int32 - 1, Cases.Num());
	Precedent.Init(nullptr, Cases.Num());

	int32 StartIndex = Cases.Find(Start);
	Distance[StartIndex] = 0;
	while (CasesAnalyzed.Num() != Cases.Num()) {
		int index = -1;
		int value = MAX_int32 - 1;
		for (int i = 0; i < Distance.Num(); i++) {
			if (!CasesAnalyzed.Contains(Cases[i]) && Distance[i] <= value) {
				index = i;
				value = Distance[i];
			}
		}
		AGridCase* DjikstraCurrentCase = Cases[index];
		CasesAnalyzed.Add(DjikstraCurrentCase);
		for (AGridCase* Neighbor : DjikstraCurrentCase->GetNeighbors()) {

			int NeighborIndex = Cases.Find(Neighbor);

			if (Distance[NeighborIndex] > Distance[index] + 1) {
				Distance[NeighborIndex] = Distance[index] + 1;
				Precedent[NeighborIndex] = DjikstraCurrentCase;
			}
		}
	}

	TArray<AGridCase*> PCC;
	AGridCase* CCase = End;
	int CIndex = Cases.Find(CCase);
	while (CCase != Start) {
		PCC.Add(CCase);
		CIndex = Cases.Find(CCase);
		if (CIndex == -1) {
			//Print all PCC cases in the log
			FString PathString = "";
			for (int i = 0; i < PCC.Num(); i++) {
				if (PCC[i]) {

					PathString += PCC[i]->GetName();
					PathString += " ";
				}
			}
			return;
		}
		CCase = Precedent[CIndex];
	}
	Path.Empty();
	for (int i = PCC.Num() - 1; i >= 0; i--) {
		Path.Add(PCC[i]);
	}


}

void AWolf::EnemyAction() {
	WolfAttack();
	if (Julie == nullptr) {
		if (bIsAwaken) {
			if (Path.Num() != 0) {
				NextCase = Path[0];
				MoveToCase(NextCase);
				Path.RemoveAt(0);
			}
			else {
				TimelineFinishedCallback();
			}
		}
		else {
			TimelineFinishedCallback();
		}
	}

}

void AWolf::MoveToCase(AGridCase* Case) {
	if (Case == nullptr) {
		TimelineFinishedCallback();
		return;
	}
	ChangeCase(Case);
	StartTravel();
}

void AWolf::UpdateCasesColor() {
	for (int i = 0; i < Path.Num(); i++) {
		//Color cases in Yellow
		Path[i]->ChangeColor(ECaseColor::CaseColor_Green);
	}
}

void AWolf::WolfAttack() {
	AJulie* Player = Cast<AJulie>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (Player == nullptr || Julie) {
		return;
	}
	if (CurrentCase->GetPawnsOnCase().Contains(Player)) {
		Julie = Player;
		Player->Death(this);
		WolfSleepingSound->Stop();
		AttackSound->Play();
		Julie->OnDeath.AddLambda([this](AGamePawn* JuliePawn) {
			GetWorldTimerManager().SetTimer(KillTimerHandle, this, &AWolf::CallKillTimer, 0.5f, true);
		});
	}
}

void AWolf::Awake() {
	if (!bIsAwaken) {
		bIsAwaken = true;
		WolfSleepingSound->Stop();
		WolfWakingSound->Play();
		UStaticMesh * AwakenMesh = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/GA_asset/Characters/Loup/loupV2.loupV2'"));
		if (AwakenMesh != nullptr) {
			WolfMesh->SetStaticMesh(AwakenMesh);
		}
	}
}

void AWolf::TimelineFinishedCallback()
{
	switch (MovementType) {
	case EPawnMovementType::PawnMovementType_Travel:
		if (CurrentCase != nullptr) {
			CurrentCase->ExitCase(this);
		}
		if (NextCase != nullptr) {
			CurrentCase = NextCase;
			CurrentCase->EnterCase(this);
			NextCase = nullptr;
		}
		EndAction();
		break;
	default:
		break;
	}
}

void AWolf::WolfTurnEnd() {
	WolfAttack();
	AJulie* Player = Cast<AJulie>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (bIsAwaken && Player != nullptr) {
		Djikstra(GetCurrentCase(), Player->GetCurrentCase());
		if (Path.Num() != 0) {
			NextCase = Path[0];
			FVector LookAtPosition = FVector(NextCase->GetActorLocation().X, NextCase->GetActorLocation().Y, GetActorLocation().Z);
			NextRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), LookAtPosition);
			StartRotation();
		}
	}
}

void AWolf::EndAction() {
	WolfTurnEnd();
	if (!Julie) {
		if (OnActionEnded.IsBound()) {
			OnActionEnded.Broadcast(this);
		}
	}
}

/***********************************************************************
*				AUDIO FUNCTIONS			                               *
***********************************************************************/

void AWolf::SilenceSounds() {
	Super::SilenceSounds();
	AttackSound->Stop();
	WolfSleepingSound->Stop();
	WolfWakingSound->Stop();
}