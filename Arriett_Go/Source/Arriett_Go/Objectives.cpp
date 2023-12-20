#include "Objectives.h"
#include "Arriett_GoGameMode.h"

UObjectives::UObjectives(AArriett_GoGameMode* Gamemode)
{
	this->Gamemode = Gamemode;
}

/********************************************
*				 LEVEL 1					*
********************************************/

ULevel1Objective::ULevel1Objective()
{
	ObjectiveDescription1 = "Reach the exit";
	ObjectiveDescription2 = "Collect the basket";
	ObjectiveDescription3 = "Complete the level in " + FString::FromInt(TurnNumberMax) + " turns";
}

bool ULevel1Objective::GetObjective2()
{
	return Gamemode->GetCollectible();
}

bool ULevel1Objective::GetObjective3()
{
	return Gamemode->GetNbTurn() <= 17;
}

/********************************************
*				 LEVEL 2					*
********************************************/

ULevel2Objective::ULevel2Objective()
{
	ObjectiveDescription1 = "Reach the exit";
	ObjectiveDescription2 = "Collect the basket";
	ObjectiveDescription3 = "Complete the level in " + FString::FromInt(TurnNumberMax) + " turns";
}

bool ULevel2Objective::GetObjective2()
{
	return Gamemode->GetCollectible();
}

bool ULevel2Objective::GetObjective3()
{
	return Gamemode->GetNbTurn() <= 17;
}
/********************************************
*				 LEVEL 3					*
********************************************/
ULevel3Objective::ULevel3Objective()
{
	ObjectiveDescription1 = "Reach the exit";
	ObjectiveDescription2 = "Collect the basket";
	ObjectiveDescription3 = "Complete the level in " + FString::FromInt(TurnNumberMax) + " turns";
}
bool ULevel3Objective::GetObjective2()
{
	return Gamemode->GetCollectible();
}

bool ULevel3Objective::GetObjective3()
{
	return Gamemode->GetNbTurn() <= 25;
}