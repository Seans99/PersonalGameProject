#pragma once

#include "CoreMinimal.h"
#include "GUIBase.h"
#include "MainMenu.generated.h"

class UButton;
class UTextBlock;

UCLASS()
class PERSONALPROJECT_API UMainMenu : public UGUIBase
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;
	
public:
	UFUNCTION()
	void PlayGame();

	UFUNCTION()
	void Settings();

	UFUNCTION()
	void QuitGame();

public:
	UFUNCTION()
	void PlayHoverEffect();

	UFUNCTION()
	void SettingsHoverEffect();

	UFUNCTION()
	void QuitHoverEffect();

	UFUNCTION()
	void PlayUnHoveredEffect();

	UFUNCTION()
	void SettingsUnHoveredEffect();

	UFUNCTION()
	void QuitUnHoveredEffect();

public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* PlayGameBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* PlayGameText;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* SettingsBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* SettingsText;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* QuitGameBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* QuitGameText;

private:
	FSlateColor DefaultTextColor = FSlateColor(FLinearColor(0.47451, 0.596078, 0.596078, 0.8));
	FSlateColor HoveredTextColor = FSlateColor(FLinearColor(0.002732, 0.005182, 0.008023, 1.0));
};
