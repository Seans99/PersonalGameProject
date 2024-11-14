#include "TitleScreen.h"
#include "../PrimarySystems/PrimaryGameMode.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/Button.h"
#include "Components/HorizontalBox.h"
#include <Kismet/GameplayStatics.h>

void UTitleScreen::NativeConstruct()
{
	Super::NativeConstruct();

	GameMode = Cast<APrimaryGameMode>(UGameplayStatics::GetGameMode(GetWorld()));

	StartGameBtn->OnClicked.AddDynamic(this, &UTitleScreen::StartGame);
	PlayGameBtn->OnClicked.AddDynamic(this, &UTitleScreen::PlayGame);
	SettingsBtn->OnClicked.AddDynamic(this, &UTitleScreen::Settings);
	QuitGameBtn->OnClicked.AddDynamic(this, &UTitleScreen::QuitGame);
}

void UTitleScreen::StartGame()
{
	// Show menu buttons
}

void UTitleScreen::PlayGame()
{
	// Play game
	GameMode->SetState(EGameState::EInGame);
}

void UTitleScreen::Settings()
{
	// Open settings menu
}

void UTitleScreen::QuitGame()
{
	// Quit the game
	UKismetSystemLibrary::QuitGame(GetWorld(), 0, EQuitPreference::Quit, true);
}
