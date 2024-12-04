#pragma once

#include "CoreMinimal.h"
#include "GUIBase.h"
#include "MainMenu.generated.h"

class UCustomButtonV1;
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
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCustomButtonV1* PlayGameButton;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCustomButtonV1* SettingsButton;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCustomButtonV1* QuitGameButton;
};
