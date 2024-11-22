#pragma once

#include "CoreMinimal.h"
#include "GUIBase.h"
#include "PauseMenu.generated.h"

class UButton;

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
	UButton* ResumeGameBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* SettingsBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* QuitToTitleBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* QuitBtn;
};
