#pragma once

#include "CoreMinimal.h"
#include "GUIBase.h"
#include "PauseMenu.generated.h"

class UCustomButtonV1;
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
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCustomButtonV1* ResumeGameButton;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCustomButtonV1* SettingsButton;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCustomButtonV1* QuitToTitleButton;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCustomButtonV1* QuitButton;
};
