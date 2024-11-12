#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PrimaryGameMode.generated.h"

UCLASS()
class PERSONALPROJECT_API APrimaryGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public: 
	APrimaryGameMode();

protected:
	virtual void BeginPlay() override;
};
