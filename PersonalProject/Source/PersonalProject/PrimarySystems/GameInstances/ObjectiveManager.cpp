#include "ObjectiveManager.h"

FText UObjectiveManager::GetCurrentObjectiveDesc()
{
	return CurrentObjectiveDesc;
}

void UObjectiveManager::SetCurrentObjectiveDesc(FText Objective)
{
	CurrentObjectiveDesc = Objective;
}

bool UObjectiveManager::CheckIfHasObjective()
{
	return bHasObjective;
}

void UObjectiveManager::SetHasObjective(bool State)
{
	bHasObjective = State;
}
