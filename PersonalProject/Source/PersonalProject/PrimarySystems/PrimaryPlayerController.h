#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PrimaryPlayerController.generated.h"

UCLASS()
class PERSONALPROJECT_API APrimaryPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	void EnableMouse();
	void DisableMouse();
};
