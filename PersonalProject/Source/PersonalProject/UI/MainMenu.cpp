#include "MainMenu.h"
#include <Kismet/KismetSystemLibrary.h>
#include <Kismet/GameplayStatics.h>
#include "../PrimarySystems/PrimaryGameMode.h"
#include "Components/Button.h"
#include "Components/HorizontalBox.h"
#include "Components/TextBlock.h"

void UMainMenu::NativeConstruct()
{
	Super::NativeConstruct();

	PlayGameBtn->OnClicked.AddDynamic(this, &UMainMenu::PlayGame);
	SettingsBtn->OnClicked.AddDynamic(this, &UMainMenu::Settings);
	QuitGameBtn->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);

	PlayGameBtn->OnHovered.AddDynamic(this, &UMainMenu::PlayHoverEffect);
	SettingsBtn->OnHovered.AddDynamic(this, &UMainMenu::SettingsHoverEffect);
	QuitGameBtn->OnHovered.AddDynamic(this, &UMainMenu::QuitHoverEffect);

	PlayGameBtn->OnUnhovered.AddDynamic(this, &UMainMenu::PlayUnHoveredEffect);
	SettingsBtn->OnUnhovered.AddDynamic(this, &UMainMenu::SettingsUnHoveredEffect);
	QuitGameBtn->OnUnhovered.AddDynamic(this, &UMainMenu::QuitUnHoveredEffect);
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

#pragma region HoverEffects

void UMainMenu::PlayHoverEffect()
{
	PlayGameText->SetColorAndOpacity(HoveredTextColor);
}

void UMainMenu::SettingsHoverEffect()
{
	SettingsText->SetColorAndOpacity(HoveredTextColor);
}

void UMainMenu::QuitHoverEffect()
{
	QuitGameText->SetColorAndOpacity(HoveredTextColor);
}

void UMainMenu::PlayUnHoveredEffect()
{
	PlayGameText->SetColorAndOpacity(DefaultTextColor);
}

void UMainMenu::SettingsUnHoveredEffect()
{
	SettingsText->SetColorAndOpacity(DefaultTextColor);
}

void UMainMenu::QuitUnHoveredEffect()
{
	QuitGameText->SetColorAndOpacity(DefaultTextColor);
}

#pragma endregion

