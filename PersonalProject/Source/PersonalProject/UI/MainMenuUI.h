#pragma once

#include "GUIBase.h"
#include "MainMenuUI.generated.h"

class UButton;
class UTextBlock;
class UVerticalBox;

UCLASS(Abstract)
class PERSONALPROJECT_API UMainMenuUI : public UGUIBase
{
	GENERATED_BODY()

public: 
	void Start();
	void PlayGame();
	void Options();
	void Quit();

public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* StartBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* PlayBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* OptionsBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* QuitBtn;
};