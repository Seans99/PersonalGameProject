#pragma once

#include "CoreMinimal.h"
#include "GUIBase.h"
#include "Settings.generated.h"

class UButton;
class UHorizontalBox;
class UVerticalBox;
class UImage;

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
	UButton* DisplayBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* AudioBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* ControlsBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* AccessibilityBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* BackBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* CloseBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* ApplyBtn;

public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UVerticalBox* DisplaySettings;

public:
	UFUNCTION()
	void ShowDisplaySettings();

public:

	UFUNCTION()
	void Back();

	UFUNCTION()
	void Apply();
};
