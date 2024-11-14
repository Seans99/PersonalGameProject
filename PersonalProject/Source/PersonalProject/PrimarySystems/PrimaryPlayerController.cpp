#include "PrimaryPlayerController.h"

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
