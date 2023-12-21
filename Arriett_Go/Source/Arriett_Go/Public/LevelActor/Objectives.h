#pragma once
#include "CoreMinimal.h"
#include "Objectives.generated.h"


class AArriett_GoGameMode;
UCLASS(Abstract,BlueprintType)
class ARRIETT_GO_API UObjectives : public UObject
{
	GENERATED_BODY()
public:
	UObjectives() {};
	UObjectives(AArriett_GoGameMode* Gamemode);

	//The level completion
	UFUNCTION(BlueprintCallable, BlueprintPure)
	virtual bool GetObjective1() {
		return true;
	}
	//The collectible obtained
	UFUNCTION(BlueprintCallable, BlueprintPure)
	virtual bool GetObjective2() {
		return true;
	}
	//The number of turns taken
	UFUNCTION(BlueprintCallable, BlueprintPure)
	virtual bool GetObjective3() {
		return true;
	}
	UFUNCTION(BlueprintCallable, BlueprintPure)
	virtual FString GetObjectiveDescription1() {
		return ObjectiveDescription1;
	}

	UFUNCTION(BlueprintCallable, BlueprintPure)
	virtual FString GetObjectiveDescription2() {
		return ObjectiveDescription2;
	}

	UFUNCTION(BlueprintCallable, BlueprintPure)
	virtual FString GetObjectiveDescription3() {
		return ObjectiveDescription3;
	}

	void SetGameMode(AArriett_GoGameMode* NewGamemode) {
		this->Gamemode = NewGamemode;
	}
protected:
	UPROPERTY()
	AArriett_GoGameMode* Gamemode;
	FString ObjectiveDescription1 = "Objective 1";
	FString ObjectiveDescription2 = "Objective 2";
	FString ObjectiveDescription3 = "Objective 3";
};

/********************************************
*				 LEVEL 1					*
********************************************/

UCLASS()
class ARRIETT_GO_API ULevel1Objective : public UObjectives
{
	GENERATED_BODY()

	public:
		ULevel1Objective();
		virtual bool GetObjective2() override;
		virtual bool GetObjective3() override;
protected : 
	int32 TurnNumberMax = 27;
};


/********************************************
*				 LEVEL 2					*
********************************************/
UCLASS()
class ARRIETT_GO_API ULevel2Objective : public UObjectives
{
	GENERATED_BODY()

public:
	ULevel2Objective();
	virtual bool GetObjective2() override;
	virtual bool GetObjective3() override;

protected:
	int32 TurnNumberMax = 14;
};


/********************************************
*				 LEVEL 3					*
********************************************/
UCLASS()
class ARRIETT_GO_API ULevel3Objective : public UObjectives
{
	GENERATED_BODY()

public:
	ULevel3Objective();
	virtual bool GetObjective2() override;
	virtual bool GetObjective3() override;

protected:
	int32 TurnNumberMax = 45;
};