#include "PauseMenu.h"
#include "Components/Button.h"
#include "../PrimarySystems/PrimaryGameMode.h"
#include <Kismet/GameplayStatics.h>

void UPauseMenu::NativeConstruct()
{
	Super::NativeConstruct();

	ResumeGameBtn->OnClicked.AddDynamic(this, &UPauseMenu::ResumeGame);
	SettingsBtn->OnClicked.AddDynamic(this, &UPauseMenu::Settings);
	QuitToTitleBtn->OnClicked.AddDynamic(this, &UPauseMenu::QuitToTitle);
	QuitBtn->OnClicked.AddDynamic(this, &UPauseMenu::Quit);
}

void UPauseMenu::ResumeGame()
{
	GameMode->SetState(EGameState::EInGame);
}

void UPauseMenu::Settings()
{
	GameMode->SetState(EGameState::ESettings);
}

void UPauseMenu::QuitToTitle()
{
	GameMode->SetState(EGameState::ETitleScreen);
	UGameplayStatics::OpenLevel(GetWorld(), GameMode->MainLevel);
}

void UPauseMenu::Quit()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), 0, EQuitPreference::Quit, true);
}
