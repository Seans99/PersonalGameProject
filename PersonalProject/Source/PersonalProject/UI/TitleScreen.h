#pragma once

#include "GUIBase.h"
#include "TitleScreen.generated.h"

class UTextBlock;
class UButton;

UCLASS(Abstract)
class PERSONALPROJECT_API UTitleScreen : public UGUIBase
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* StartGameBtn;

public:
	UFUNCTION()
	void StartGame();
};
