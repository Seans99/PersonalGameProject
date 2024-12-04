#include "PauseMenu.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "../PrimarySystems/PrimaryGameMode.h"
#include <Kismet/GameplayStatics.h>

void UPauseMenu::NativeConstruct()
{
	Super::NativeConstruct();

	ResumeGameBtn->OnClicked.AddDynamic(this, &UPauseMenu::ResumeGame);
	ResumeGameBtn->OnHovered.AddDynamic(this, &UPauseMenu::ResumeHoverEffect);
	ResumeGameBtn->OnUnhovered.AddDynamic(this, &UPauseMenu::ResumeUnHoveredEffect);

	SettingsBtn->OnClicked.AddDynamic(this, &UPauseMenu::Settings);
	SettingsBtn->OnHovered.AddDynamic(this, &UPauseMenu::SettingsHoverEffect);
	SettingsBtn->OnUnhovered.AddDynamic(this, &UPauseMenu::SettingsUnHoveredEffect);

	QuitToTitleBtn->OnClicked.AddDynamic(this, &UPauseMenu::QuitToTitle);
	QuitToTitleBtn->OnHovered.AddDynamic(this, &UPauseMenu::QuitTitleHoverEffect);
	QuitToTitleBtn->OnUnhovered.AddDynamic(this, &UPauseMenu::QuitTitleUnHoveredEffect);

	QuitBtn->OnClicked.AddDynamic(this, &UPauseMenu::Quit);
	QuitBtn->OnHovered.AddDynamic(this, &UPauseMenu::QuitHoverEffect);
	QuitBtn->OnUnhovered.AddDynamic(this, &UPauseMenu::QuitUnHoveredEffect);
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

#pragma region HoverEffects

void UPauseMenu::ResumeHoverEffect()
{
	ResumeText->SetColorAndOpacity(HoveredTextColor);
}

void UPauseMenu::SettingsHoverEffect()
{
	SettingsText->SetColorAndOpacity(HoveredTextColor);
}

void UPauseMenu::QuitHoverEffect()
{
	QuitText->SetColorAndOpacity(HoveredTextColor);
}

void UPauseMenu::QuitTitleHoverEffect()
{
	QuitToTitleText->SetColorAndOpacity(HoveredTextColor);
}

void UPauseMenu::ResumeUnHoveredEffect()
{
	ResumeText->SetColorAndOpacity(DefaultTextColor);
}

void UPauseMenu::SettingsUnHoveredEffect()
{
	SettingsText->SetColorAndOpacity(DefaultTextColor);
}

void UPauseMenu::QuitUnHoveredEffect()
{
	QuitText->SetColorAndOpacity(DefaultTextColor);
}

void UPauseMenu::QuitTitleUnHoveredEffect()
{
	QuitToTitleText->SetColorAndOpacity(DefaultTextColor);
}

#pragma endregion
