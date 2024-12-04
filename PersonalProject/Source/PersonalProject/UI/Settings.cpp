#include "Settings.h"
#include "../PrimarySystems/PrimaryGameMode.h"
#include "Components/Button.h"
#include "Components/HorizontalBox.h"
#include "Components/VerticalBox.h"
#include "Components/Image.h"
#include "../UI/UIComponents/CustomButtonV1.h"
#include <Kismet/GameplayStatics.h>

void USettings::NativeConstruct()
{
	Super::NativeConstruct();

	DisplayButton->OnClicked.AddDynamic(this, &USettings::ShowDisplaySettings);
	AudioButton->OnClicked.AddDynamic(this, &USettings::ShowAudioSettings);
	ControlsButton->OnClicked.AddDynamic(this, &USettings::ShowControlsSettings);
	AccessibilityButton->OnClicked.AddDynamic(this, &USettings::ShowAccessibilitySettings);

	BackButton->OnClicked.AddDynamic(this, &USettings::Back);
	ApplyBtn->OnClicked.AddDynamic(this, &USettings::Apply);
	CloseBtn->OnClicked.AddDynamic(this, &USettings::Close);
}

void USettings::Back()
{
	FString CurrentLevel = UGameplayStatics::GetCurrentLevelName(GetWorld());

	if (CurrentLevel == GameMode->MainLevel) GameMode->SetState(EGameState::EMainMenu);
	if (CurrentLevel == GameMode->Level1) GameMode->SetState(EGameState::EPause);
}

void USettings::Apply()
{
	// Apply settings
}

void USettings::Close()
{
	Settings->SetVisibility(ESlateVisibility::Hidden);
	SettingsBackgroundImg->SetVisibility(ESlateVisibility::Hidden);
	SettingsButtons->SetVisibility(ESlateVisibility::Hidden);

	// Close all open settings
	DisplaySettings->SetVisibility(ESlateVisibility::Hidden);
	AudioSettings->SetVisibility(ESlateVisibility::Hidden);
	ControlsSettings->SetVisibility(ESlateVisibility::Hidden);
	AccessibilitySettings->SetVisibility(ESlateVisibility::Hidden);
}

void USettings::ShowDisplaySettings()
{
	SettingsBackgroundImg->SetVisibility(ESlateVisibility::Visible);
	Settings->SetVisibility(ESlateVisibility::Visible);
	DisplaySettings->SetVisibility(ESlateVisibility::Visible);
	SettingsButtons->SetVisibility(ESlateVisibility::Visible);
}

void USettings::ShowAudioSettings()
{
	SettingsBackgroundImg->SetVisibility(ESlateVisibility::Visible);
	Settings->SetVisibility(ESlateVisibility::Visible);
	AudioSettings->SetVisibility(ESlateVisibility::Visible);
	SettingsButtons->SetVisibility(ESlateVisibility::Visible);
}

void USettings::ShowControlsSettings()
{
	SettingsBackgroundImg->SetVisibility(ESlateVisibility::Visible);
	Settings->SetVisibility(ESlateVisibility::Visible);
	ControlsSettings->SetVisibility(ESlateVisibility::Visible);
	SettingsButtons->SetVisibility(ESlateVisibility::Visible);
}

void USettings::ShowAccessibilitySettings()
{
	SettingsBackgroundImg->SetVisibility(ESlateVisibility::Visible);
	Settings->SetVisibility(ESlateVisibility::Visible);
	AccessibilitySettings->SetVisibility(ESlateVisibility::Visible);
	SettingsButtons->SetVisibility(ESlateVisibility::Visible);
}
