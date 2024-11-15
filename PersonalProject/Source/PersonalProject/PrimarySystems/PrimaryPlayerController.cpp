#include "PrimaryPlayerController.h"
#include "PrimaryGameMode.h"
#include <Kismet/GameplayStatics.h>

APrimaryPlayerController::APrimaryPlayerController()
{
	GameMode = Cast<APrimaryGameMode>(UGameplayStatics::GetGameMode(GetWorld()));

	PrimaryActorTick.bCanEverTick = true;
}

void APrimaryPlayerController::EnableMouse()
{
	bShowMouseCursor = true;
	SetInputMode(FInputModeUIOnly());
}

void APrimaryPlayerController::DisableMouse()
{
	bShowMouseCursor = false;
	SetInputMode(FInputModeGameOnly());
}
