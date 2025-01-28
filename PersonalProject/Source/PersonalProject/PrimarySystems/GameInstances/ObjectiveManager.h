#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ObjectiveManager.generated.h"

UCLASS()
class PERSONALPROJECT_API UObjectiveManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
private:
	FText CurrentObjectiveTitle;
	FText CurrentObjectiveDesc;
	bool bHasObjective = false;

public:
	FText GetCurrentObjectiveDesc();
	void SetCurrentObjectiveDesc(FText Desc);

	bool CheckIfHasObjective();
	void SetHasObjective(bool State);
};
