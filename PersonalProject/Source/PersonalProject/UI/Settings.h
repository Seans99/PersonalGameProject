#pragma once

#include "CoreMinimal.h"
#include "GUIBase.h"
#include "Settings.generated.h"

class UGameUserSettings;

class UButton;
class UCustomButtonV1;
class UHorizontalBox;
class UVerticalBox;
class UImage;
class UComboBoxString;
class UCheckBox;
class USlider;

UCLASS()
class PERSONALPROJECT_API USettings : public UGUIBase
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UImage* BackgroundImg;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UImage* SettingsBackgroundImg;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCustomButtonV1* DisplayButton;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCustomButtonV1* AudioButton;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCustomButtonV1* ControlsButton;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCustomButtonV1* AccessibilityButton;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCustomButtonV1* BackButton;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* CloseBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* ApplyBtn;

public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UVerticalBox* DisplaySettings;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UVerticalBox* AudioSettings;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UVerticalBox* ControlsSettings;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UVerticalBox* AccessibilitySettings;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UHorizontalBox* SettingsButtons;

public:
	UFUNCTION()
	void ShowDisplaySettings();

	UFUNCTION()
	void ShowAudioSettings();

	UFUNCTION()
	void ShowControlsSettings();

	UFUNCTION()
	void ShowAccessibilitySettings();

public:

	UFUNCTION()
	void Back();

	UFUNCTION()
	void Apply();

	UFUNCTION()
	void Close();

protected:
	void InitializeDisplayModeBox();
	void InitializeResolutionBox();
	void InitializeVSync();
	void InitializeMasterVolume();
	void InitializeMusicVolume();

	UFUNCTION()
	void OnResolutionChanged(FString InSelectedItem, ESelectInfo::Type InSelectionType);

	UFUNCTION()
	void OnDisplayModeChanged(FString InSelectedItem, ESelectInfo::Type InSelectionType);

	UFUNCTION()
	void OnVSyncChanged(bool bInIsChecked);

	UFUNCTION()
	void OnMasterVolumeChanged(float Value);

	UFUNCTION()
	void OnMusicVolumeChanged(float Value);

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UComboBoxString* DisplayModeComboBox;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UComboBoxString* ResolutionComboBox;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCheckBox* VSyncCheckBox;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	USlider* MasterVolumeSlider;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	USlider* MusicVolumeSlider;

	UPROPERTY()
	TArray<FIntPoint> Resolutions;

	UPROPERTY()
	TArray<TEnumAsByte<EWindowMode::Type>> DisplayModes;

private:
	UGameUserSettings* GameUserSettings;
};
