#include "MainMenu.h"
#include <Kismet/KismetSystemLibrary.h>
#include <Kismet/GameplayStatics.h>
#include "../PrimarySystems/PrimaryGameMode.h"
#include "../UI/UIComponents/CustomButtonV1.h"
#include "Components/HorizontalBox.h"
#include "Components/TextBlock.h"

void UMainMenu::NativeConstruct()
{
	Super::NativeConstruct();

	PlayGameButton->OnClicked.AddDynamic(this, &UMainMenu::PlayGame);
	SettingsButton->OnClicked.AddDynamic(this, &UMainMenu::Settings);
	QuitGameButton->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);
}

void UMainMenu::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
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
	SettingsButton->IsActiveButton(true);
}

void UMainMenu::QuitGame()
{
	// Quit the game
	UKismetSystemLibrary::QuitGame(GetWorld(), 0, EQuitPreference::Quit, true);
}


