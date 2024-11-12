#include "GUIBase.h"

void UGUIBase::SetVisibilityState(ESlateVisibility state)
{
	Visibility = state;
	SetVisibility(Visibility);
}

void UGUIBase::SetWidgetOpacity(float value)
{
	SetRenderOpacity(value);
}
