//#pragma once
//#include "CoreMinimal.h"
//#include "GameFramework/GameStateBase.h"
//#include "Kismet/GameplayStatics.h"
//#include "Arrietty_Game_GameState.generated.h"
//
//class ABearTrap;
//class AEffectGridCase;
//class AEnemyPawn;
//class AGridCase;
//class AJulie;
//DECLARE_MULTICAST_DELEGATE(FOnTurnNumberChanged)
//UCLASS(Blueprintable)
//class AArriett_GoGameMode : public AGameStateBase
//{
//	GENERATED_BODY()
//
//public :
//AArriett_GoGameMode();
//	virtual void BeginPlay() override;
//
//	UFUNCTION(BlueprintCallable)
//	void InitGridCases(int32 GridSizeX, int32 GridSizeY);
//	UFUNCTION(BlueprintCallable)
//	AGridCase * GetGridCase(int32 X, int32 Y) const;
//	UFUNCTION(BlueprintCallable)
//	void SetGridCase(int32 X, int32 Y, AGridCase * GridCase);
//	UFUNCTION(BlueprintCallable)
//	static int32 GridCaseDistance(FVector2D GridCase1, FVector2D GridCase2);
//	UFUNCTION(BlueprintCallable)
//	void GridCasesVerification();
//	UFUNCTION(BlueprintCallable)
//	void Temporary_InitLevel1();
//	void AddCaseToLevel(int32 X, int32 Y, int32 Z);	
//	AGridCase * AddCaseToLevel2(FVector WorldPosition, FVector2D GridPos);
//	void posToCaseTmp(FVector GridWorldPosition);
//	void posToBearTrapTmp(FVector GridWorldPosition);
//	void AutoLinkCases();
//	AJulie * GetPlayerPawn() const;
//	int32 GetNbTurn() const;
//	void SetNbTurn(int32 NewNbTurn);
//	void AddTurn();
//
//	void EnemiesActions();
//
//	void EffectGridCasesActions();
//
//	void CheckEndGame() const;
//
//	void SetPlayerPawn(AJulie* NewPlayerPawn);
//
//
//
//	// The delegate that is called when the number of turn changes
//	FOnTurnNumberChanged OnTurnNumberChanged;
//protected :
//	//Function that add a bear trap to the level
//	ABearTrap* AddBearTrap(FVector WorldPosition, FVector2D GridPos);
//
//	//The offset of all the case from (0,0,0)
//	FVector Offset = FVector(600, 600, 5);
//
//	// The array containing all the grid cases
//	TArray<TArray<AGridCase *>> GridCases;
//	// A Map that can be used to find a grid case by its position
//	TMap<FVector, AGridCase*> PositionToGridCase;
//	// The player pawn
//	AJulie * PlayerPawn = nullptr;
//
//	// The enemies pawns
//	TArray<AEnemyPawn*> Enemies;
//
//	// The array containing all the effect grid cases
//	TArray <AEffectGridCase*> EffectGridCases;
//
//	// The number of turn since the beginning of the game
//	int32 NbTurn = 0;
//
//	void Temporary_InitLevel2();
//};
//
