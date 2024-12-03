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

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* StartGametext;

public:
	UFUNCTION()
	void StartGame();

	UFUNCTION()
	void HoveredEffect();

	UFUNCTION()
	void UnHoveredEffect();

private:
	FSlateColor DefaultTextColor = FSlateColor(FLinearColor(0.47451, 0.596078, 0.596078, 0.8));
	FSlateColor HoveredTextColor = FSlateColor(FLinearColor(0.002732, 0.005182, 0.008023, 1.0));
};
