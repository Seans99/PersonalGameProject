#pragma once

#include "GUIBase.h"
#include "TitleScreen.generated.h"

class UButton;

UCLASS(Abstract)
class PERSONALPROJECT_API UTitleScreen : public UGUIBase
{
	GENERATED_BODY()
	
public:
	void StartGame();
	void QuitGame();

public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* StartGameBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* QuitGameBtn;
};
