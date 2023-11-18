#include "Arrietty_Game_GameState.h"
#include "BearTrap.h"
#include "Blueprint/UserWidget.h"
#include "EnemyPawn.h"
#include "EffectGridCase.h"
#include "GridCase.h"	
#include "Julie.h"	

AArrietty_Game_GameState::AArrietty_Game_GameState() {
	//Set the default grid size
	int32 GridSizeX = 10;
	int32 GridSizeY = 10;
	//Init the grid
	InitGridCases(GridSizeX, GridSizeY);
}

void AArrietty_Game_GameState::InitGridCases(int32 GridSizeX, int32 GridSizeY) {
	//Init the grid
	GridCases.Init(TArray<AGridCase *>(), GridSizeY);
	//Init the grid cases
	for (int32 i = 0; i < GridSizeX; i++) {
			GridCases[i].Init(nullptr, GridSizeX);
	}
}


AGridCase* AArrietty_Game_GameState::GetGridCase(int32 X, int32 Y) const{
	if ( Y < 0 || Y >= GridCases.Num() || X < 0 || X >= GridCases[Y].Num() ) {
		return nullptr;
	}
	return GridCases[Y][X];
}
void AArrietty_Game_GameState::SetGridCase(int32 X, int32 Y, AGridCase* GridCase) {
	if (Y < 0 || Y >= GridCases.Num() || X < 0 || X >= GridCases[Y].Num()) {
		return;
	}
	GridCases[Y][X] = GridCase;
	GridCase->SetCasePosition(X, Y);
}



void AArrietty_Game_GameState::GridCasesVerification() {
	TArray<AActor *> GridCasesActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGridCase::StaticClass(), GridCasesActors);
	for (auto Actor : GridCasesActors) {
		AGridCase * GridCase = Cast<AGridCase>(Actor);
		int32 X = GridCase -> GetX();
		int32 Y = GridCase -> GetY();
		int32 Z = GridCase -> GetZ();

		FVector Position = FVector(X, Y, Z);
		AGridCase * GridCaseAtPosition = PositionToGridCase.FindRef(Position);
		if (GridCaseAtPosition != GridCase) {
			UE_LOG(LogTemp, Warning, TEXT(" Double Grid case at position %s | GridCase1 %p , Gridcase2 %p"), *Position.ToString());
		}
		else {
			PositionToGridCase.Add(Position, GridCase);
		}

	}
}

void AArrietty_Game_GameState::Temporary_InitLevel1() {
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
	APawn * Pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	AJulie * Julie = Cast<AJulie>(Pawn);
	if (!Julie || !Julie -> IsValidLowLevel()) {
		UE_LOG(LogTemp, Warning, TEXT("Julie is not valid"));
		return;
	}
	PlayerPawn = Julie;
	Julie -> TeleportToCase(GetGridCase(0, 0));
}

void AArrietty_Game_GameState::AddCaseToLevel(int32 X, int32 Y, int32 Z) {
	FVector Position = FVector(X, Y, Z);
	FVector WorldPosition = FVector(X * 100, Y * 100, Z * 100) + Offset;
	WorldPosition += FVector(50,50,50);
	AGridCase * GridCase =  GWorld -> SpawnActor<AGridCase>(WorldPosition, FRotator::ZeroRotator);
	PositionToGridCase.Add(Position, GridCase);
	

}

AGridCase * AArrietty_Game_GameState::AddCaseToLevel2(FVector WorldPosition,FVector2D GridPos) {
	int32 X = GridPos.X;
	int32 Y = GridPos.Y;
	int32 Z = 0;
	FVector Position = FVector(X, Y, Z);
	AGridCase* GridCase = GWorld->SpawnActor<AGridCase>(WorldPosition + Offset, FRotator::ZeroRotator);
	PositionToGridCase.Add(Position, GridCase);
	GridCase->SetCasePosition(X, Y);
	return GridCase;

}

ABearTrap * AArrietty_Game_GameState::AddBearTrap(FVector WorldPosition, FVector2D GridPos) {
	int32 X = GridPos.X;
	int32 Y = GridPos.Y;
	int32 Z = 0;
	FVector Position = FVector(X, Y, Z);
	ABearTrap * GridCase = GWorld->SpawnActor<ABearTrap >(WorldPosition + Offset, FRotator::ZeroRotator);
	PositionToGridCase.Add(Position, GridCase);
	GridCase->SetCasePosition(X, Y);
	GridCase -> SetupTrap();
	EffectGridCases.Add(GridCase);
	return GridCase;

}

void AArrietty_Game_GameState::posToCaseTmp(FVector GridWorldPosition) {
	AGridCase * Case = AddCaseToLevel2(GridWorldPosition * FVector(200,200,100), FVector2D(GridWorldPosition.X, GridWorldPosition.Y));
	SetGridCase(GridWorldPosition.X, GridWorldPosition.Y, Case);
}

void AArrietty_Game_GameState::posToBearTrapTmp(FVector GridWorldPosition) {
	AGridCase* Case = AddBearTrap(GridWorldPosition * FVector(200, 200, 100), FVector2D(GridWorldPosition.X, GridWorldPosition.Y));
	SetGridCase(GridWorldPosition.X, GridWorldPosition.Y, Case);
}

void AArrietty_Game_GameState::AutoLinkCases() {
	for (auto & Elem : PositionToGridCase) {
		AGridCase * GridCase = Elem.Value;
		int32 X = GridCase->GetX();
		int32 Y = GridCase->GetY();
		int32 Z = GridCase->GetZ();
		//Get the 4 cases around the current case
		AGridCase * CaseUp = GetGridCase(X, Y + 1);
		AGridCase * CaseDown = GetGridCase(X, Y - 1);
		AGridCase * CaseLeft = GetGridCase(X - 1, Y);
		AGridCase * CaseRight = GetGridCase(X + 1, Y);
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

int32 AArrietty_Game_GameState::GridCaseDistance(FVector2D GridCase1, FVector2D GridCase2) {
	return FMath::Abs(GridCase1.X - GridCase2.X) + FMath::Abs(GridCase1.Y - GridCase2.Y);
}

AJulie* AArrietty_Game_GameState::GetPlayerPawn() const {
	return PlayerPawn;
}

int32 AArrietty_Game_GameState::GetNbTurn() const {
	return NbTurn;
}

void AArrietty_Game_GameState::SetNbTurn(int32 NewNbTurn) {
	NbTurn = NewNbTurn;
	OnTurnNumberChanged.Broadcast();
}

void AArrietty_Game_GameState::AddTurn() {
	NbTurn++;
	OnTurnNumberChanged.Broadcast();
}

void AArrietty_Game_GameState::EnemiesActions() {
	for (AEnemyPawn* Enemy : Enemies) {
		Enemy->EnemyAction();
	}
	CheckEndGame();
	EffectGridCasesActions();
}

void AArrietty_Game_GameState::EffectGridCasesActions() {
	for (AEffectGridCase* EffectGridCase : EffectGridCases) {
		EffectGridCase->ActivateEffect();
	}
	CheckEndGame();

}


void AArrietty_Game_GameState::CheckEndGame() const {
	if (!PlayerPawn || !PlayerPawn->IsValidLowLevel() || PlayerPawn -> IsActorBeingDestroyed()) {
		auto WidgetClass = LoadClass<UUserWidget>(nullptr, TEXT("WidgetBlueprint'/Game/UI/UI_DeathScreen.UI_DeathScreen_C'"));
		if (!WidgetClass) {
			UE_LOG(LogTemp, Warning, TEXT("Widget class not found"));
			return;
		}
		 UUserWidget * Widget = CreateWidget(GetWorld(), WidgetClass);
		 Widget->AddToViewport();
	}
}


