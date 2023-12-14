// Fill out your copyright notice in the Description page of Project Settings.


#include "Wolf.h"
#include "Arriett_GoGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "GridCase.h"
#include "Julie.h"

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
	auto Gamemode  = UGameplayStatics::GetGameMode(this);
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
		AGridCase * DjikstraCurrentCase = Cases[index];
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
	UE_LOG(LogTemp, Warning, TEXT("Path found size %d"), PCC.Num());
	Path.Empty();
	for (int i = PCC.Num() - 1; i >= 0; i--) {
		Path.Add(PCC[i]);
	}
		
	
}

void AWolf::EnemyAction() {
	WolfAttack();
	if (bIsAwaken && Julie == nullptr)  {
		if (Path.Num() != 0) {
			//I want to concat the names of all the cases in the path to display it in the log
			FString PathString = "";
			for (int i = 0; i < Path.Num(); i++) {
				PathString += Path[i]->GetName();
				PathString += " ";
			}
			UE_LOG(LogTemp, Warning, TEXT("[p] Path %s"), *PathString);
			NextCase = Path[0]	;
			UE_LOG(LogTemp, Warning, TEXT("[p] Current case %s"), *CurrentCase->GetName());
			UE_LOG(LogTemp, Warning, TEXT("[p] Move to case %s"), *NextCase->GetName());
			MoveToCase(NextCase);
			WolfAttack();
			Path.RemoveAt(0);
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("Path is empty"));
			TimelineFinishedCallback();
		}
	}
	else {
		TimelineFinishedCallback();
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
	if (CurrentCase->GetPawnsOnCase().Contains(Player)) {
		Julie = Player;
		Player->Death(this);
		
		/*Julie->OnDeath.AddLambda([this](AGamePawn* JuliePawn) {
			Super::TimelineFinishedCallback();
		});*/
	}
}

void AWolf::Awake() {
	bIsAwaken = true;
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
	if (Julie) {
		Julie->OnDeath.AddLambda([this](AGamePawn* JuliePawn) {
			if (OnActionEnded.IsBound()) {
				OnActionEnded.Broadcast(this);
			}
		});
	}
	else{
		if (OnActionEnded.IsBound()) {
			OnActionEnded.Broadcast(this);
		}
	}
}
