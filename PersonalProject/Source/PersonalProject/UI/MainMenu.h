#pragma once

#include "CoreMinimal.h"
#include "GUIBase.h"
#include "MainMenu.generated.h"

class UButton;

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
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* PlayGameBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* SettingsBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* QuitGameBtn;
};
