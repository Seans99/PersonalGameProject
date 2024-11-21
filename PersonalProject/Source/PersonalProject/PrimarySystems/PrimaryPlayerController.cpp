#include "PrimaryPlayerController.h"
#include "PrimaryGameMode.h"
#include <Kismet/GameplayStatics.h>

APrimaryPlayerController::APrimaryPlayerController()
{
	GameMode = Cast<APrimaryGameMode>(UGameplayStatics::GetGameMode(GetWorld()));

	PrimaryActorTick.bCanEverTick = true;
}

void APrimaryPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (GameMode->GetCurrentState() == EGameState::ETitleScreen)
	{
		if (IsInputKeyDown(EKeys::SpaceBar))
		{
			GameMode->SetState(EGameState::EMainMenu);
		}
	}
	if (GameMode->GetCurrentState() == EGameState::EInGame)
	{
		if (IsInputKeyDown(EKeys::Escape))
		{
			GameMode->SetState(EGameState::EPause);
		}
	}
}

void APrimaryPlayerController::EnableMouse()
{
	SetShowMouseCursor(true);
	SetInputMode(FInputModeUIOnly());
}

void APrimaryPlayerController::DisableMouse()
{
	SetShowMouseCursor(false);
	SetInputMode(FInputModeGameOnly());
}
