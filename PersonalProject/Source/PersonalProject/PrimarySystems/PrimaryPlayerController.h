#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PrimaryPlayerController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FViewingInteractSignature);

class APrimaryGameMode;

UCLASS()
class PERSONALPROJECT_API APrimaryPlayerController : public APlayerController
{
	GENERATED_BODY()

private:
	APrimaryPlayerController();

public:
	virtual void Tick(float DeltaTime) override;

public:
	void EnableMouse();
	void DisableMouse();

	void EnableMouseInGame();
	void DisableMouseInGame();

public:
	bool ViewingInteractable = false;

	UPROPERTY()
	FViewingInteractSignature OnStopViewInteractable;

private:
	APrimaryGameMode* GameMode;
};
