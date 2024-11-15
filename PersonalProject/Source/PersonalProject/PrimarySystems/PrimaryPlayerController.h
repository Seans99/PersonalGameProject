#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PrimaryPlayerController.generated.h"

class APrimaryGameMode;

UCLASS()
class PERSONALPROJECT_API APrimaryPlayerController : public APlayerController
{
	GENERATED_BODY()

private:
	APrimaryPlayerController();

public:
	void EnableMouse();
	void DisableMouse();

private:
	APrimaryGameMode* GameMode;
};
