#include "TitleScreen.h"
#include "../PrimarySystems/PrimaryGameMode.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/Button.h"
#include <Kismet/GameplayStatics.h>

void UTitleScreen::NativeConstruct()
{
	Super::NativeConstruct();

	StartGameBtn->OnClicked.AddDynamic(this, &UTitleScreen::StartGame);
}

void UTitleScreen::StartGame()
{
	// Open main menu
	GameMode->SetState(EGameState::EMainMenu);
}


