#include "PrimaryPlayerController.h"
#include "PrimaryGameMode.h"
#include <Kismet/GameplayStatics.h>

APrimaryPlayerController::APrimaryPlayerController()
{
	GameMode = Cast<APrimaryGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
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
