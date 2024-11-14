#pragma once

#include "GUIBase.h"
#include "TitleScreen.generated.h"

class APrimaryGameMode;

class UButton;
class UHorizontalBox;

UCLASS(Abstract)
class PERSONALPROJECT_API UTitleScreen : public UGUIBase
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;
	
public:
	UFUNCTION()
	void StartGame();

public:
	UFUNCTION()
	void PlayGame();

	UFUNCTION()
	void Settings();

	UFUNCTION()
	void QuitGame();

public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* StartGameBtn;

public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UHorizontalBox* MenuButtonsBox;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* PlayGameBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* SettingsBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* QuitGameBtn;

private:
	APrimaryGameMode* GameMode;
};
