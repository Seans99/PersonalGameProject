#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GUIBase.generated.h"

UCLASS(Abstract)
class PERSONALPROJECT_API UGUIBase : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void SetVisibilityState(ESlateVisibility state);
	virtual void SetWidgetOpacity(float value);

protected:
	ESlateVisibility Visibility;
};