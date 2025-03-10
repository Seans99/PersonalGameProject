#include "Settings.h"
#include "../PrimarySystems/PrimaryGameMode.h"
#include "../PrimarySystems/GameInstances/SoundManager.h"
#include "Components/Button.h"
#include "Components/HorizontalBox.h"
#include "Components/VerticalBox.h"
#include "Components/Image.h"
#include "Components/ComboBoxString.h"
#include "Components/CheckBox.h"
#include "Components/Slider.h"
#include "GameFramework/GameUserSettings.h"
#include "../UI/UIComponents/CustomButtonV1.h"
#include <Kismet/GameplayStatics.h>
#include "../PrimarySystems/PrimaryPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

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

	MasterVolumeSlider->OnValueChanged.AddDynamic(this, &USettings::OnMasterVolumeChanged);
	MusicVolumeSlider->OnValueChanged.AddDynamic(this, &USettings::OnMusicVolumeChanged);

	InitializeDisplayModeBox();
	InitializeResolutionBox();
	InitializeVSync();
	InitializeMasterVolume();
	InitializeMusicVolume();
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
	DisplayModes.Reset();

	DisplayModes.Add(EWindowMode::Fullscreen);
	DisplayModes.Add(EWindowMode::WindowedFullscreen);
	DisplayModes.Add(EWindowMode::Windowed);

	DisplayModeComboBox->ClearOptions();

	for (const auto& Mode : DisplayModes)
	{
		if (Mode == EWindowMode::Fullscreen)
		{
			const auto DisplayString = FString::Printf(TEXT("Fullscreen"));
			DisplayModeComboBox->AddOption(DisplayString);
		}
		else if (Mode == EWindowMode::WindowedFullscreen)
		{
			const auto DisplayString = FString::Printf(TEXT("Borderless"));
			DisplayModeComboBox->AddOption(DisplayString);
		}
		else if (Mode == EWindowMode::Windowed)
		{
			const auto DisplayString = FString::Printf(TEXT("Windowed"), Mode);
			DisplayModeComboBox->AddOption(DisplayString);
		}
	}

	const auto CurrentDisplayMode = GameUserSettings->GetFullscreenMode();

	const auto SelectedIndex = DisplayModes.IndexOfByPredicate(
		[&CurrentDisplayMode](const EWindowMode::Type& InDisplayMode)
		{
			return InDisplayMode == CurrentDisplayMode;
		});

	DisplayModeComboBox->SetSelectedIndex(SelectedIndex);
	DisplayModeComboBox->OnSelectionChanged.Clear();
	DisplayModeComboBox->OnSelectionChanged.AddDynamic(this, &USettings::OnDisplayModeChanged);
}

void USettings::InitializeResolutionBox()
{
	Resolutions.Reset();

	Resolutions.Add(FIntPoint(1280, 720));
	Resolutions.Add(FIntPoint(1920, 1080));
	Resolutions.Add(FIntPoint(2560, 1440));
	Resolutions.Add(FIntPoint(3840, 2160));

	ResolutionComboBox->ClearOptions();

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

	ResolutionComboBox->SetSelectedIndex(SelectedIndex);

	ResolutionComboBox->OnSelectionChanged.Clear();
	ResolutionComboBox->OnSelectionChanged.AddDynamic(this, &USettings::OnResolutionChanged);
}

void USettings::InitializeVSync()
{
	VSyncCheckBox->SetIsChecked(GameUserSettings->IsVSyncEnabled());
	VSyncCheckBox->OnCheckStateChanged.Clear();
	VSyncCheckBox->OnCheckStateChanged.AddDynamic(this, &USettings::OnVSyncChanged);
}

void USettings::InitializeMasterVolume()
{
	if (USoundManager* SoundManager = GetGameInstance()->GetSubsystem<USoundManager>())
	{
		MasterVolumeSlider->SetValue(SoundManager->GetMasterVolume());
	}
}

void USettings::InitializeMusicVolume()
{
	if (USoundManager* SoundManager = GetGameInstance()->GetSubsystem<USoundManager>())
	{
		MusicVolumeSlider->SetValue(SoundManager->GetMusicVolume());
	}
}

void USettings::OnResolutionChanged(FString InSelectedItem, ESelectInfo::Type InSelectionType)
{
	const auto SelectedResolution = Resolutions[ResolutionComboBox->GetSelectedIndex()];
	GameUserSettings->SetScreenResolution(SelectedResolution);
}

void USettings::OnDisplayModeChanged(FString InSelectedItem, ESelectInfo::Type InSelectionType)
{
	const auto SelectedDisplayMode = DisplayModes[DisplayModeComboBox->GetSelectedIndex()];
	GameUserSettings->SetFullscreenMode(SelectedDisplayMode);
}

void USettings::OnVSyncChanged(bool bInIsChecked)
{
	GameUserSettings->SetVSyncEnabled(bInIsChecked);
	GameUserSettings->ApplySettings(false);
}

void USettings::OnMasterVolumeChanged(float Value)
{
	if (USoundManager* SoundManager = GetGameInstance()->GetSubsystem<USoundManager>())
	{
		SoundManager->SetMasterVolume(Value);
	}
}

void USettings::OnMusicVolumeChanged(float Value)
{
	if (USoundManager* SoundManager = GetGameInstance()->GetSubsystem<USoundManager>())
	{
		SoundManager->SetMusicVolume(Value);
	}
}
