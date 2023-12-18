// Copyright Epic Games, Inc. All Rights Reserved.

#include "Arriett_GoGameMode.h"
#include "Arriett_GoPlayerController.h"
#include "Arriett_GoCharacter.h"
#include "BearTrap.h"
#include "Blueprint/UserWidget.h"
#include "EffectGridCase.h"
#include "EndCase.h"
#include "EnemyPawn.h"
#include "EngineUtils.h"
#include "GridCase.h"	
#include "Hunter.h"
#include "Julie.h"	
#include "Kismet/GameplayStatics.h"
#include "State.h"
#include "UObject/ConstructorHelpers.h"
#include "Wolf.h"
#include "TimerManager.h"
//Include engine utils
#include "EngineUtils.h"


UGameModeStateMachine::UGameModeStateMachine(AArriett_GoGameMode* Owner) {
	this->Owner = Owner;
}

void UGameModeStateMachine::SetOwner(AArriett_GoGameMode* NewOwner) {
	Owner = NewOwner;
}
void UGameModeStateMachine::SetNextState(UState_GameMode*  NewState) {
	UE_LOG(LogTemp, Warning, TEXT("SetNextState Current State : %s"), *CurrentState->GetName());

	UState_GameMode* GM_State = Cast<UState_GameMode>(CurrentState);
	if (GM_State) {
		//auto GameModeStateClass = Cast<UState_GameMode>(NewStateClass);
		GM_State->SetNextState(NewState);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("CurrentState is not a UState_GameMode"));
	}

}


AArriett_GoGameMode::AArriett_GoGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AArriett_GoPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	/*static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Pawns/BP_Julie"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("PlayerPawnBPClass.Class is nullptr"));
	}*/

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_ArriettyGoController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}

	FSM = CreateDefaultSubobject<UGameModeStateMachine>(TEXT("FSM"));
	FSM->SetOwner(this);

}

void AArriett_GoGameMode::BeginPlay() {
	Super::BeginPlay();

	// Detection of all the pawns
	TArray <AActor*> Pawns;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGamePawn::StaticClass(), Pawns);
	for (AActor* Pawn : Pawns) {
		AJulie* Julie = Cast<AJulie>(Pawn);
		if (Julie != nullptr) {
			SetPlayerPawn(Julie);
		}
		else {
			AEnemyPawn* EnemyPawn = Cast<AEnemyPawn>(Pawn);
			if (EnemyPawn != nullptr) {
				AddEnemy(EnemyPawn);
			}
		}
	}

	TArray<AActor* > MapGridCases;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGridCase::StaticClass(), MapGridCases);
	TArray <AGridCase*> TempGridCases;
	for (int i = 0; i < MapGridCases.Num(); i++) {
		AGridCase* Case = Cast<AGridCase>(MapGridCases[i]);
		if (Case != nullptr) {
			TempGridCases.Add(Case);
			/*if (Case->IsStartCase()) {
				PlayerPawn->TeleportToCase(Case);
			}*/
		}
		AEffectGridCase* EffectGridCase = Cast<AEffectGridCase>(MapGridCases[i]);
		if (EffectGridCase) {
			AddEffectGridCase(EffectGridCase);
		}

	}
	GridCases = TempGridCases;
	auto NewState = NewObject<UState_GameModeInputWait>();
	NewState->SetGamemode(this);
	FSM->ChangeState(NewState);

	UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->StartCameraFade(1.f, 0.f, 2.f, FLinearColor::Black, false, true);

}


/***********************************************************************
*				GRID CASES  FUNCTIONS                                  *
***********************************************************************/

TArray <AGridCase*> AArriett_GoGameMode::GetGridCases() const {
	return GridCases;
}

TArray<AEffectGridCase*> AArriett_GoGameMode::GetEffectGridCases() const {
	return EffectGridCases;
}


void AArriett_GoGameMode::AddEffectGridCase(AEffectGridCase* NewEffectGridCase) {
	EffectGridCases.Add(NewEffectGridCase);
	NewEffectGridCase->OnGridEffectCompleted.BindUObject(this, &AArriett_GoGameMode::RemoveEffectGridCaseToActivate);
	FSM->UpdateState();
}

void AArriett_GoGameMode::RemoveEffectGridCaseToActivate(AEffectGridCase* EffectGridCaseToRemove) {
	EffectGridCasesToActivate.Remove(EffectGridCaseToRemove);
	FSM->UpdateState();
}

void AArriett_GoGameMode::ColorGrid() {
	ResetGridCasesColor();
	PawnColorCases();
}

void AArriett_GoGameMode::ResetGridCasesColor() {
	for (auto& Elem : GridCases) {
		Elem->ChangeColor(ECaseColor::CaseColor_Black);
	}
}



/***********************************************************************
*				PAWN FUNCTIONS                                         *
***********************************************************************/

void AArriett_GoGameMode::SetPlayerPawn(AJulie* NewPlayerPawn) {
	PlayerPawn = NewPlayerPawn;
	UE_LOG(LogTemp, Warning, TEXT("SetPlayerPawn"));
	NewPlayerPawn->OnActionEnded.AddLambda([this](AGamePawn* Pawn) {
		PlayerMovementEnd();
		});
	NewPlayerPawn->OnDeath.AddLambda([this](AGamePawn* Pawn) {
		PlayerDeath(Pawn);
		});
}

AJulie* AArriett_GoGameMode::GetPlayerPawn() const {
	return PlayerPawn;
}

void AArriett_GoGameMode::AddEnemy(AEnemyPawn* NewEnemy) {
	Enemies.Add(NewEnemy);
	NewEnemy->OnActionEnded.AddLambda([this](AGamePawn* Pawn) {
		AEnemyPawn* Enemy = Cast<AEnemyPawn>(Pawn);
		if (Enemy) {
			RemoveEnemyToMove(Enemy);
		}
		});
	NewEnemy->OnDeath.AddLambda([this](AGamePawn* Pawn) {
		AEnemyPawn* Enemy = Cast<AEnemyPawn>(Pawn);
		if (Enemy) {
			Enemies.Remove(Enemy);
		}
		});
}

void AArriett_GoGameMode::PawnColorCases() {
	PlayerPawn->UpdateCasesColor();
	for (AEnemyPawn* Enemy : Enemies) {
		Enemy->UpdateCasesColor();
	}
}

void AArriett_GoGameMode::PlayerDeath(AGamePawn * DeadPawn) {
	bIsPlayerPawnDead = true;
	FSM->SetNextState(NewObject<UState_GameModeEndGame>());
}
/***********************************************************************
*                TURN FUNCTIONS                                        *
***********************************************************************/

void AArriett_GoGameMode::SetNbTurn(int32 NewNbTurn) {
	NbTurn = NewNbTurn;
	OnTurnNumberChanged.Broadcast();
}

int32 AArriett_GoGameMode::GetNbTurn() const {
	return NbTurn;
}

void AArriett_GoGameMode::AddTurn() {
	NbTurn++;
	OnTurnNumberChanged.Broadcast();
}

/***********************************************************************
*                COLLECTIBLES FUNCTIONS                                *
***********************************************************************/

void AArriett_GoGameMode::SetCollectible(bool NewCollectible) {
	bHasCollectible = NewCollectible;
}

bool AArriett_GoGameMode::GetCollectible() const {
	return bHasCollectible;
}
/***********************************************************************
*				LEVEL FUNCTIONS                                       *
***********************************************************************/

void AArriett_GoGameMode::RestartCurrentLevel() {
	// Extract the actual level name without the "UEDPIE_0_" prefix
	FString CurrentMapName = GetWorld()->GetMapName();

#if WITH_EDITOR
	// Check if we are in the editor (Play In Editor)
	if (CurrentMapName.StartsWith("UEDPIE_0_"))
	{
		// Extract the part of the string after the prefix
		CurrentMapName = CurrentMapName.RightChop(9);
	}
#endif
	UGameplayStatics::OpenLevel(GetWorld(), FName(CurrentMapName),false);
}

/***********************************************************************
*				STATES FUNCTIONS                                       *
***********************************************************************/

	/* Input State */

void AArriett_GoGameMode::SetSelectedCase(AGridCase* NewSelectedCase) {
	SelectedCase = NewSelectedCase;
	//FSM update
	FSM->UpdateState();
}

AGridCase* AArriett_GoGameMode::GetSelectedCase() const {
	return SelectedCase;
}
	/* Player Movement State */

bool AArriett_GoGameMode::GetPlayerMovementEnded() const {
	return PlayerMovementEnded;
}

void AArriett_GoGameMode::ResetPlayerMovement() {
	PlayerMovementEnded = false;
}

void AArriett_GoGameMode::PlayerMovementEnd() {
	PlayerMovementEnded = true;
	FSM->UpdateState();
}

	/* Case Effect State */

void AArriett_GoGameMode::EffectGridCasesActions() {
	for (AEffectGridCase* EffectGridCase : EffectGridCases) {
		EffectGridCase->ActivateEffect();
	}
	CheckEndGame();
}

void AArriett_GoGameMode::CheckEndGame() {
	if (!PlayerPawn || !PlayerPawn->IsValidLowLevel() || PlayerPawn->IsActorBeingDestroyed() || bIsPlayerPawnDead) {
		GEngine -> AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Lose"));

		auto WidgetClass = LoadClass<UUserWidget>(nullptr, TEXT("WidgetBlueprint'/Game/UI/UI_DeathScreen.UI_DeathScreen_C'"));
		if (!WidgetClass) {
			UE_LOG(LogTemp, Warning, TEXT("Widget class not found"));
			return;
		}
		UUserWidget* Widget = CreateWidget(GetWorld(), WidgetClass);
		Widget->AddToViewport();
		for (AEnemyPawn* Enemy : Enemies) {
			Enemy -> SilenceSounds();
		} 
		UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->StartCameraFade(0.f, 1.f, 2.f, FLinearColor::Black, false, true);
		GetWorldTimerManager().SetTimer(RestartTimer,this, &AArriett_GoGameMode::RestartCurrentLevel, 2.f, false);
	}
	else {
		if (PlayerPawn->GetCurrentCase()->IsA(AEndCase::StaticClass())) {
			// Win widget
			auto WidgetClass = LoadClass<UUserWidget>(nullptr, TEXT("WidgetBlueprint'/Game/UI/UI_EndLevelScreen.UI_EndLevelScreen_C'"));
			if (!WidgetClass) {
				UE_LOG(LogTemp, Warning, TEXT("Widget class not found"));
				return;
			}
			UUserWidget* Widget = CreateWidget(GetWorld(), WidgetClass);
			Widget->AddToViewport();
			for (AEnemyPawn* Enemy : Enemies) {
				Enemy->SilenceSounds();
			}
		}
	}
}

TArray<AEffectGridCase*> AArriett_GoGameMode::GetEffectGridCasesToActivate() const {
	return EffectGridCasesToActivate;
}

void AArriett_GoGameMode::ResetEffectGridCasesToActivate() {
	EffectGridCasesToActivate.Empty();
	for (AEffectGridCase* EffectGridCase : EffectGridCases) {
		EffectGridCasesToActivate.Add(EffectGridCase);
	}
}







	/* Enemy Movement State */



void AArriett_GoGameMode::EnemiesActions() {
	for (AEnemyPawn* Enemy : Enemies) {
		Enemy->EnemyAction();
	}
	AddTurn();
}

TArray<AEnemyPawn*> AArriett_GoGameMode::GetEnemiesToMove() const {
	return EnemiesToMove;
}

void AArriett_GoGameMode::ResetEnemiesToMove() {
	EnemiesToMove.Empty();
	for (AEnemyPawn* Enemy : Enemies) {
		EnemiesToMove.Add(Enemy);
	}
}

void AArriett_GoGameMode::RemoveEnemyToMove(AEnemyPawn* EnemyToRemove) {
	EnemiesToMove.Remove(EnemyToRemove);
	FSM->UpdateState();
}

	/* Turn End State */

void AArriett_GoGameMode::ResetTurnActivables() {
	for (AEffectGridCase* EffectGridCase : EffectGridCases) {
		EffectGridCase->ResetTurnActivable();
	}
}


	/* FiniteStateMachine Getter */
UGameModeStateMachine* AArriett_GoGameMode::GetFSM() const {
	return FSM;
}

