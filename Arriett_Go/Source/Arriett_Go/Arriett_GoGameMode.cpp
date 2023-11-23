// Copyright Epic Games, Inc. All Rights Reserved.

#include "Arriett_GoGameMode.h"
#include "Arriett_GoPlayerController.h"
#include "Arriett_GoCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "BearTrap.h"
#include "Blueprint/UserWidget.h"
#include "EffectGridCase.h"
#include "EnemyPawn.h"
#include "EngineUtils.h"
#include "GridCase.h"	
#include "Julie.h"	
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
#include "Hunter.h"


AArriett_GoGameMode::AArriett_GoGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AArriett_GoPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_Julie"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("PlayerPawnBPClass.Class is nullptr"));
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_ArriettyGoController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}

	//Set the default grid size
	int32 GridSizeX = 10;
	int32 GridSizeY = 10;
	//Init the grid
	InitGridCases(GridSizeX, GridSizeY);

}

void AArriett_GoGameMode::BeginPlay() {
	Super::BeginPlay();


	APawn* Pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	AJulie* Julie = Cast<AJulie>(Pawn);
	if (!Julie || !Julie->IsValidLowLevel()) {
		UE_LOG(LogTemp, Warning, TEXT("Julie is not valid"));
		return;
	}
	PlayerPawn = Julie;
	TArray<AActor* > GridCases2;
	//Temporary_InitLevel2();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGridCase::StaticClass(), GridCases2);
	TArray <AGridCase*> TempGridCases;
	for (int i = 0; i < GridCases2.Num(); i++) {
		AGridCase* Case = Cast<AGridCase>(GridCases2[i]);
		if (Case != nullptr) {
			TempGridCases.Add(Case);
			if (Case->IsStartCase()) {
				PlayerPawn->TeleportToCase(Case);
			}
		}
	}
	GridCases[0] = TempGridCases;
}

void AArriett_GoGameMode::InitGridCases(int32 GridSizeX, int32 GridSizeY) {
	//Init the grid
	GridCases.Init(TArray<AGridCase*>(), GridSizeY);
	//Init the grid cases
	for (int32 i = 0; i < GridSizeX; i++) {
		GridCases[i].Init(nullptr, GridSizeX);
	}
}


AGridCase* AArriett_GoGameMode::GetGridCase(int32 X, int32 Y) const {
	if (Y < 0 || Y >= GridCases.Num() || X < 0 || X >= GridCases[Y].Num()) {
		return nullptr;
	}
	return GridCases[Y][X];
}
void AArriett_GoGameMode::SetGridCase(int32 X, int32 Y, AGridCase* GridCase) {
	if (Y < 0 || Y >= GridCases.Num() || X < 0 || X >= GridCases[Y].Num()) {
		return;
	}
	GridCases[Y][X] = GridCase;
	GridCase->SetCasePosition(X, Y);
}



void AArriett_GoGameMode::GridCasesVerification() {
	TArray<AActor*> GridCasesActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGridCase::StaticClass(), GridCasesActors);
	for (auto Actor : GridCasesActors) {
		AGridCase* GridCase = Cast<AGridCase>(Actor);
		int32 X = GridCase->GetX();
		int32 Y = GridCase->GetY();
		int32 Z = GridCase->GetZ();

		FVector Position = FVector(X, Y, Z);
		AGridCase* GridCaseAtPosition = PositionToGridCase.FindRef(Position);
		if (GridCaseAtPosition != GridCase) {
			UE_LOG(LogTemp, Warning, TEXT(" Double Grid case at position %s | GridCase1 %p , Gridcase2 %p"), *Position.ToString());
		}
		else {
			PositionToGridCase.Add(Position, GridCase);
		}

	}
}

void AArriett_GoGameMode::Temporary_InitLevel1() {
	GridCases.Empty();
	PositionToGridCase.Empty();
	InitGridCases(10, 10);
	posToCaseTmp(FVector(0, 0, 0));
	posToCaseTmp(FVector(0, 1, 0));
	//posToCaseTmp(FVector(0, 2, 0));
	posToBearTrapTmp(FVector(0, 2, 0));
	posToCaseTmp(FVector(0, 3, 0));
	posToCaseTmp(FVector(0, 4, 0));
	posToCaseTmp(FVector(0, 5, 0));
	posToCaseTmp(FVector(0, 6, 0));
	posToCaseTmp(FVector(0, 7, 0));
	posToCaseTmp(FVector(1, 2, 0));
	posToCaseTmp(FVector(1, 3, 0));
	posToCaseTmp(FVector(1, 4, 0));
	posToCaseTmp(FVector(1, 6, 0));
	posToCaseTmp(FVector(1, 7, 1));
	posToCaseTmp(FVector(2, 7, 2));
	AutoLinkCases();
	GetGridCase(0, 4)->OnActivationDelegate.BindLambda([this]() {
		AGridCase* CaseA = GetGridCase(1, 4);
		AGridCase* CaseB = GetGridCase(1, 6);
		if (CaseA->GetNeighbors().Contains(CaseB)) {
			AGridCase::UnlinkCases(CaseA, CaseB);
		}
		else {
			AGridCase::LinkCases(CaseA, CaseB);
		}
		});
	APawn* Pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	AJulie* Julie = Cast<AJulie>(Pawn);
	if (!Julie || !Julie->IsValidLowLevel()) {
		UE_LOG(LogTemp, Warning, TEXT("Julie is not valid"));
		return;
	}
	PlayerPawn = Julie;
	Julie->TeleportToCase(GetGridCase(0, 0));
}

void AArriett_GoGameMode::AddCaseToLevel(int32 X, int32 Y, int32 Z) {
	FVector Position = FVector(X, Y, Z);
	FVector WorldPosition = FVector(X * 100, Y * 100, Z * 100) + Offset;
	WorldPosition += FVector(50, 50, 50);
	AGridCase* GridCase = GWorld->SpawnActor<AGridCase>(WorldPosition, FRotator::ZeroRotator);
	PositionToGridCase.Add(Position, GridCase);


}

AGridCase* AArriett_GoGameMode::AddCaseToLevel2(FVector WorldPosition, FVector2D GridPos) {
	int32 X = GridPos.X;
	int32 Y = GridPos.Y;
	int32 Z = 0;
	FVector Position = FVector(X, Y, Z);
	AGridCase* GridCase = GWorld->SpawnActor<AGridCase>(WorldPosition + Offset, FRotator::ZeroRotator);
	PositionToGridCase.Add(Position, GridCase);
	GridCase->SetCasePosition(X, Y);
	return GridCase;

}

ABearTrap* AArriett_GoGameMode::AddBearTrap(FVector WorldPosition, FVector2D GridPos) {
	int32 X = GridPos.X;
	int32 Y = GridPos.Y;
	int32 Z = 0;
	FVector Position = FVector(X, Y, Z);
	ABearTrap* GridCase = GWorld->SpawnActor<ABearTrap >(WorldPosition + Offset, FRotator::ZeroRotator);
	PositionToGridCase.Add(Position, GridCase);
	GridCase->SetCasePosition(X, Y);
	GridCase->SetupTrap();
	EffectGridCases.Add(GridCase);
	return GridCase;

}

void AArriett_GoGameMode::posToCaseTmp(FVector GridWorldPosition) {
	AGridCase* Case = AddCaseToLevel2(GridWorldPosition * FVector(200, 200, 100), FVector2D(GridWorldPosition.X, GridWorldPosition.Y));
	SetGridCase(GridWorldPosition.X, GridWorldPosition.Y, Case);
}

void AArriett_GoGameMode::posToBearTrapTmp(FVector GridWorldPosition) {
	AGridCase* Case = AddBearTrap(GridWorldPosition * FVector(200, 200, 100), FVector2D(GridWorldPosition.X, GridWorldPosition.Y));
	SetGridCase(GridWorldPosition.X, GridWorldPosition.Y, Case);
}

void AArriett_GoGameMode::AutoLinkCases() {
	for (auto& Elem : PositionToGridCase) {
		AGridCase* GridCase = Elem.Value;
		int32 X = GridCase->GetX();
		int32 Y = GridCase->GetY();
		int32 Z = GridCase->GetZ();
		//Get the 4 cases around the current case
		AGridCase* CaseUp = GetGridCase(X, Y + 1);
		AGridCase* CaseDown = GetGridCase(X, Y - 1);
		AGridCase* CaseLeft = GetGridCase(X - 1, Y);
		AGridCase* CaseRight = GetGridCase(X + 1, Y);
		//Link the cases
		if (CaseUp != nullptr) {
			GridCase->AddNeighbor(CaseUp);
		}
		if (CaseDown != nullptr) {
			GridCase->AddNeighbor(CaseDown);
		}
		if (CaseLeft != nullptr) {
			GridCase->AddNeighbor(CaseLeft);
		}
		if (CaseRight != nullptr) {
			GridCase->AddNeighbor(CaseRight);
		}
	}
}

int32 AArriett_GoGameMode::GridCaseDistance(FVector2D GridCase1, FVector2D GridCase2) {
	return FMath::Abs(GridCase1.X - GridCase2.X) + FMath::Abs(GridCase1.Y - GridCase2.Y);
}

AJulie* AArriett_GoGameMode::GetPlayerPawn() const {
	return PlayerPawn;
}

int32 AArriett_GoGameMode::GetNbTurn() const {
	return NbTurn;
}

void AArriett_GoGameMode::SetNbTurn(int32 NewNbTurn) {
	NbTurn = NewNbTurn;
	OnTurnNumberChanged.Broadcast();
}

void AArriett_GoGameMode::AddTurn() {
	NbTurn++;
	OnTurnNumberChanged.Broadcast();
}

void AArriett_GoGameMode::EnemiesActions() {
	for (AEnemyPawn* Enemy : Enemies) {
		Enemy->EnemyAction();
	}
	CheckEndGame();
}

void AArriett_GoGameMode::EffectGridCasesActions() {
	for (AEffectGridCase* EffectGridCase : EffectGridCases) {
		EffectGridCase->ActivateEffect();
	}
	CheckEndGame();
	EnemiesActions();
}


void AArriett_GoGameMode::CheckEndGame() const {
	if (!PlayerPawn || !PlayerPawn->IsValidLowLevel() || PlayerPawn->IsActorBeingDestroyed()) {
		auto WidgetClass = LoadClass<UUserWidget>(nullptr, TEXT("WidgetBlueprint'/Game/UI/UI_DeathScreen.UI_DeathScreen_C'"));
		if (!WidgetClass) {
			UE_LOG(LogTemp, Warning, TEXT("Widget class not found"));
			return;
		}
		UUserWidget* Widget = CreateWidget(GetWorld(), WidgetClass);
		Widget->AddToViewport();
	}
}

void AArriett_GoGameMode::SetPlayerPawn(AJulie* NewPlayerPawn) {
	PlayerPawn = NewPlayerPawn;
}



void AArriett_GoGameMode::Temporary_InitLevel2() {
	GridCases.Empty();
	PositionToGridCase.Empty();
	InitGridCases(10, 10);
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			posToCaseTmp(FVector(i, j, 0));
		}
	}
	AutoLinkCases();
	APawn* Pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	AJulie* Julie = Cast<AJulie>(Pawn);
	if (!Julie || !Julie->IsValidLowLevel()) {
		UE_LOG(LogTemp, Warning, TEXT("Julie is not valid"));
		return;
	}
	PlayerPawn = Julie;
	Julie->TeleportToCase(GetGridCase(0, 0));
	auto HunterClass = LoadClass<AHunter>(nullptr, TEXT("Blueprint'/Game/TopDown/Blueprints/BP_Hunter.BP_Hunter_C'"));
	auto Hunter = GWorld->SpawnActor<AHunter>(HunterClass, FVector(0, 0, 0), FRotator::ZeroRotator);
	Hunter->TeleportToCase(GetGridCase(2, 2));
	Enemies.Add(Hunter);
	Hunter->AutomaticHunterSetup(0);
}