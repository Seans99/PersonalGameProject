#include "TitleScreen.h"
#include "../PrimarySystems/PrimaryGameMode.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include <Kismet/GameplayStatics.h>

void UTitleScreen::NativeConstruct()
{
	Super::NativeConstruct();

	StartGameBtn->OnClicked.AddDynamic(this, &UTitleScreen::StartGame);
	StartGameBtn->OnHovered.AddDynamic(this, &UTitleScreen::HoveredEffect);
	StartGameBtn->OnUnhovered.AddDynamic(this, &UTitleScreen::UnHoveredEffect);
}

void UTitleScreen::StartGame()
{
	GameMode->SetState(EGameState::EMainMenu);
}

void UTitleScreen::HoveredEffect()
{
	StartGametext->SetColorAndOpacity(HoveredTextColor);
}

void UTitleScreen::UnHoveredEffect()
{
	StartGametext->SetColorAndOpacity(DefaultTextColor);
}


