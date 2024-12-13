#include "Settings.h"
#include "../PrimarySystems/PrimaryGameMode.h"
#include "Components/Button.h"
#include "Components/HorizontalBox.h"
#include "Components/VerticalBox.h"
#include "Components/Image.h"
#include "Components/ComboBoxString.h"
#include "GameFramework/GameUserSettings.h"
#include "../UI/UIComponents/CustomButtonV1.h"
#include <Kismet/GameplayStatics.h>

void USettings::NativeConstruct()
{
	Super::NativeConstruct();

	GameUserSettings = UGameUserSettings::GetGameUserSettings();

	DisplayButton->OnClicked.AddDynamic(this, &USettings::ShowDisplaySettings);
	AudioButton->OnClicked.AddDynamic(this, &USettings::ShowAudioSettings);
	ControlsButton->OnClicked.AddDynamic(this, &USettings::ShowControlsSettings);
	AccessibilityButton->OnClicked.AddDynamic(this, &USettings::ShowAccessibilitySettings);

	BackButton->OnClicked.AddDynamic(this, &USettings::Back);
	ApplyBtn->OnClicked.AddDynamic(this, &USettings::Apply);
	CloseBtn->OnClicked.AddDynamic(this, &USettings::Close);

	InitializeDisplayModeBox();
	InitializeResolutionBox();
}

void USettings::Back()
{
	FString CurrentLevel = UGameplayStatics::GetCurrentLevelName(GetWorld());

	if (CurrentLevel == GameMode->MainLevel) GameMode->SetState(EGameState::EMainMenu);
	if (CurrentLevel == GameMode->Level1) GameMode->SetState(EGameState::EPause);
}

void USettings::Apply()
{
	GameUserSettings->ApplySettings(false);
}

void USettings::Close()
{
	SettingsBackgroundImg->SetVisibility(ESlateVisibility::Hidden);
	SettingsButtons->SetVisibility(ESlateVisibility::Hidden);

	// Close all open settings
	DisplaySettings->SetVisibility(ESlateVisibility::Hidden);
	AudioSettings->SetVisibility(ESlateVisibility::Hidden);
	ControlsSettings->SetVisibility(ESlateVisibility::Hidden);
	AccessibilitySettings->SetVisibility(ESlateVisibility::Hidden);

	DisplayButton->IsActiveButton(false);
	AudioButton->IsActiveButton(false);
	ControlsButton->IsActiveButton(false);
	AccessibilityButton->IsActiveButton(false);
}

void USettings::ShowDisplaySettings()
{
	DisplayButton->IsActiveButton(true);

	AudioSettings->SetVisibility(ESlateVisibility::Hidden);
	ControlsSettings->SetVisibility(ESlateVisibility::Hidden);
	AccessibilitySettings->SetVisibility(ESlateVisibility::Hidden);

	SettingsBackgroundImg->SetVisibility(ESlateVisibility::Visible);
	DisplaySettings->SetVisibility(ESlateVisibility::Visible);
	SettingsButtons->SetVisibility(ESlateVisibility::Visible);

	AudioButton->IsActiveButton(false);
	ControlsButton->IsActiveButton(false);
	AccessibilityButton->IsActiveButton(false);
}

void USettings::ShowAudioSettings()
{
	AudioButton->IsActiveButton(true);

	DisplaySettings->SetVisibility(ESlateVisibility::Hidden);
	ControlsSettings->SetVisibility(ESlateVisibility::Hidden);
	AccessibilitySettings->SetVisibility(ESlateVisibility::Hidden);

	SettingsBackgroundImg->SetVisibility(ESlateVisibility::Visible);
	AudioSettings->SetVisibility(ESlateVisibility::Visible);
	SettingsButtons->SetVisibility(ESlateVisibility::Visible);

	DisplayButton->IsActiveButton(false);
	ControlsButton->IsActiveButton(false);
	AccessibilityButton->IsActiveButton(false);

}

void USettings::ShowControlsSettings()
{
	ControlsButton->IsActiveButton(true);

	DisplaySettings->SetVisibility(ESlateVisibility::Hidden);
	AudioSettings->SetVisibility(ESlateVisibility::Hidden);
	AccessibilitySettings->SetVisibility(ESlateVisibility::Hidden);

	SettingsBackgroundImg->SetVisibility(ESlateVisibility::Visible);
	ControlsSettings->SetVisibility(ESlateVisibility::Visible);
	SettingsButtons->SetVisibility(ESlateVisibility::Visible);

	DisplayButton->IsActiveButton(false);
	AudioButton->IsActiveButton(false);
	AccessibilityButton->IsActiveButton(false);
}

void USettings::ShowAccessibilitySettings()
{
	AccessibilityButton->IsActiveButton(true);

	DisplaySettings->SetVisibility(ESlateVisibility::Hidden);
	AudioSettings->SetVisibility(ESlateVisibility::Hidden);
	ControlsSettings->SetVisibility(ESlateVisibility::Hidden);

	SettingsBackgroundImg->SetVisibility(ESlateVisibility::Visible);
	AccessibilitySettings->SetVisibility(ESlateVisibility::Visible);
	SettingsButtons->SetVisibility(ESlateVisibility::Visible);

	DisplayButton->IsActiveButton(false);
	AudioButton->IsActiveButton(false);
	ControlsButton->IsActiveButton(false);
}

void USettings::InitializeDisplayModeBox()
{

}

// CRASHES WHEN OPENING SETTINGS IN EDITOR
void USettings::InitializeResolutionBox()
{
	Resolutions.Reset();

	UKismetSystemLibrary::GetSupportedFullscreenResolutions(Resolutions);

	ResolutionComboBox->ClearOptions();

	if (Resolutions.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("No Supported Resolutions Found!"));
		return;
	}

	for (const auto& Resolution : Resolutions)
	{
		const auto ResolutionString = FString::Printf(TEXT("%d x %d"), Resolution.X, Resolution.Y);
		ResolutionComboBox->AddOption(ResolutionString);
	}

	const auto CurrentResolution = GameUserSettings->GetScreenResolution();
	const auto SelectedIndex = Resolutions.IndexOfByPredicate(
		[&CurrentResolution](const FIntPoint& InResolution)
		{
			return InResolution == CurrentResolution;
		});
	check(SelectedIndex >= 0);

	ResolutionComboBox->SetSelectedIndex(SelectedIndex);

	ResolutionComboBox->OnSelectionChanged.Clear();
	ResolutionComboBox->OnSelectionChanged.AddDynamic(this, &USettings::OnResolutionChanged);
}

void USettings::OnResolutionChanged(FString InSelectedItem, ESelectInfo::Type InSelectionType)
{
	const auto SelectedResolution = Resolutions[ResolutionComboBox->GetSelectedIndex()];
	GameUserSettings->SetScreenResolution(SelectedResolution);
}
