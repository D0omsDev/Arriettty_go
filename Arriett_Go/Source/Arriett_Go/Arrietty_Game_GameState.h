#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "GridCase.h"	
#include "Kismet/GameplayStatics.h"
#include "Arrietty_Game_GameState.generated.h"


UCLASS(Blueprintable)
class AArrietty_Game_GameState : public AGameStateBase
{
	GENERATED_BODY()

public :
AArrietty_Game_GameState();

	UFUNCTION(BlueprintCallable)
	void InitGridCases(int32 GridSizeX, int32 GridSizeY);
	UFUNCTION(BlueprintCallable)
	AGridCase * GetGridCase(int32 X, int32 Y) const;
	UFUNCTION(BlueprintCallable)
	void SetGridCase(int32 X, int32 Y, AGridCase * GridCase);
	UFUNCTION(BlueprintCallable)
	void SetCurrentGridCaseByPos(int32 X, int32 Y);
	UFUNCTION(BlueprintCallable)
	void SetCurrentGridCase(AGridCase * GridCase);
	UFUNCTION(BlueprintCallable)
	FVector2D GetCurrentGridCasePosition() const;
	UFUNCTION(BlueprintCallable)
	AGridCase * GetCurrentGridCase() const;
	UFUNCTION(BlueprintCallable)
	static int32 GridCaseDistance(FVector2D GridCase1, FVector2D GridCase2);
	UFUNCTION(BlueprintCallable)
	void GridCasesVerification();
	UFUNCTION(BlueprintCallable)
	void Temporary_InitLevel1();
	void AddCaseToLevel(int32 X, int32 Y, int32 Z);	
	AGridCase * AddCaseToLevel2(FVector WorldPosition, FVector2D GridPos);
	void posToCaseTmp(FVector GridWorldPosition);
	void AutoLinkCases();

protected :
	FVector Offset = FVector(600, 600, 5);

	TArray<TArray<AGridCase *>> GridCases;
	TMap<FVector, AGridCase*> PositionToGridCase;
	FVector2D CurrentGridCasePosition;
	AGridCase * CurrentGridCase;

};

