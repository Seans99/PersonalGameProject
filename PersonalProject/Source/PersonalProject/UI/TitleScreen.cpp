#include "TitleScreen.h"
#include "../PrimarySystems/PrimaryGameMode.h"
#include "Kismet/KismetSystemLibrary.h"
#include "../UI/UIComponents/CustomButtonV1.h"
#include "Components/TextBlock.h"
#include <Kismet/GameplayStatics.h>

void UTitleScreen::NativeConstruct()
{
	Super::NativeConstruct();

	StartGameButton->OnClicked.AddDynamic(this, &UTitleScreen::StartGame);
}

void UTitleScreen::StartGame()
{
	GameMode->SetState(EGameState::EMainMenu);
}

