#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GUIBase.generated.h"

class APrimaryGameMode;

UCLASS(Abstract)
class PERSONALPROJECT_API UGUIBase : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	virtual void SetVisibilityState(ESlateVisibility state);
	virtual void SetWidgetOpacity(float value);

protected:
	ESlateVisibility Visibility;

public:
	APrimaryGameMode* GameMode;
};