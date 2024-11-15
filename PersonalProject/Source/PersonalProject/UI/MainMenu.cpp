#include "MainMenu.h"
#include <Kismet/KismetSystemLibrary.h>
#include <Kismet/GameplayStatics.h>
#include "../PrimarySystems/PrimaryGameMode.h"
#include "Components/Button.h"
#include "Components/HorizontalBox.h"

void UMainMenu::NativeConstruct()
{
	Super::NativeConstruct();

	PlayGameBtn->OnClicked.AddDynamic(this, &UMainMenu::PlayGame);
	SettingsBtn->OnClicked.AddDynamic(this, &UMainMenu::Settings);
	QuitGameBtn->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);
}

void UMainMenu::PlayGame()
{
	// Play game
	UGameplayStatics::OpenLevel(this, GameMode->Level1);
}

void UMainMenu::Settings()
{
	// Open settings menu
	GameMode->SetState(EGameState::ESettings);
}

void UMainMenu::QuitGame()
{
	// Quit the game
	UKismetSystemLibrary::QuitGame(GetWorld(), 0, EQuitPreference::Quit, true);
}