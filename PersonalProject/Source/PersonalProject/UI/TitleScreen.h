#pragma once

#include "GUIBase.h"
#include "TitleScreen.generated.h"

class UTextBlock;
class UCustomButtonV1;

UCLASS(Abstract)
class PERSONALPROJECT_API UTitleScreen : public UGUIBase
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCustomButtonV1* StartGameButton;

public:
	UFUNCTION()
	void StartGame();
};
