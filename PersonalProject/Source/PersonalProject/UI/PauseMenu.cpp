#include "PauseMenu.h"
#include "Components/Button.h"
#include "../PrimarySystems/PrimaryGameMode.h"
#include <Kismet/GameplayStatics.h>

void UPauseMenu::NativeConstruct()
{
	Super::NativeConstruct();

	ResumeGameBtn->OnClicked.AddDynamic(this, &UPauseMenu::ResumeGame);
	SettingsBtn->OnClicked.AddDynamic(this, &UPauseMenu::Settings);
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

void UPauseMenu::Quit()
{
	GameMode->SetState(EGameState::ETitleScreen);
	UGameplayStatics::OpenLevel(GetWorld(), GameMode->MainLevel);
}
