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
	if (IsInputKeyDown(EKeys::Escape) && GameMode->GetCurrentState() == EGameState::EInGame && !ViewingInteractable)
	{
		GameMode->SetState(EGameState::EPause);
	}
	else if (IsInputKeyDown(EKeys::Escape) && GameMode->GetCurrentState() == EGameState::EInGame && ViewingInteractable)
	{
		if (OnStopViewInteractable.IsBound()) OnStopViewInteractable.Broadcast();
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

void APrimaryPlayerController::EnableMouseInGame()
{
	SetShowMouseCursor(true);
	SetInputMode(FInputModeGameOnly());
}

void APrimaryPlayerController::DisableMouseInGame()
{
	SetShowMouseCursor(false);
	SetInputMode(FInputModeGameOnly());
}
