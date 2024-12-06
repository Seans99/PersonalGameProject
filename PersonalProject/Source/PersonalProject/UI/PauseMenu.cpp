#include "PauseMenu.h"
#include "Components/TextBlock.h"
#include "../UI/UIComponents/CustomButtonV1.h"
#include "../PrimarySystems/PrimaryGameMode.h"
#include <Kismet/GameplayStatics.h>

void UPauseMenu::NativeConstruct()
{
	Super::NativeConstruct();

	ResumeGameButton->OnClicked.AddDynamic(this, &UPauseMenu::ResumeGame);

	SettingsButton->OnClicked.AddDynamic(this, &UPauseMenu::Settings);

	QuitToTitleButton->OnClicked.AddDynamic(this, &UPauseMenu::QuitToTitle);

	QuitButton->OnClicked.AddDynamic(this, &UPauseMenu::Quit);
}

void UPauseMenu::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

void UPauseMenu::ResumeGame()
{
	GameMode->SetState(EGameState::EInGame);
}

void UPauseMenu::Settings()
{
	GameMode->SetState(EGameState::ESettings);
	SettingsButton->IsActiveButton(true);
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