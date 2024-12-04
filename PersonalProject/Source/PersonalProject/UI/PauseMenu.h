#pragma once

#include "CoreMinimal.h"
#include "GUIBase.h"
#include "PauseMenu.generated.h"

class UButton;
class UTextBlock;

UCLASS()
class PERSONALPROJECT_API UPauseMenu : public UGUIBase
{
	GENERATED_BODY()
	
protected: 
	virtual void NativeConstruct() override;

public:
	UFUNCTION()
	void ResumeGame();

	UFUNCTION()
	void Settings();

	UFUNCTION()
	void QuitToTitle();

	UFUNCTION()
	void Quit();

public:
	UFUNCTION()
	void ResumeHoverEffect();

	UFUNCTION()
	void SettingsHoverEffect();

	UFUNCTION()
	void QuitHoverEffect();

	UFUNCTION()
	void QuitTitleHoverEffect();

	UFUNCTION()
	void ResumeUnHoveredEffect();

	UFUNCTION()
	void SettingsUnHoveredEffect();

	UFUNCTION()
	void QuitUnHoveredEffect();

	UFUNCTION()
	void QuitTitleUnHoveredEffect();

public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* ResumeGameBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* ResumeText;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* SettingsBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* SettingsText;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* QuitToTitleBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* QuitToTitleText;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* QuitBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* QuitText;

private:
	FSlateColor DefaultTextColor = FSlateColor(FLinearColor(0.47451, 0.596078, 0.596078, 0.8));
	FSlateColor HoveredTextColor = FSlateColor(FLinearColor(0.002732, 0.005182, 0.008023, 1.0));
};
