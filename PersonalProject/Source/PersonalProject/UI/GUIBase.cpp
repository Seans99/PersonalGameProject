#include "GUIBase.h"
#include "../PrimarySystems/PrimaryGameMode.h"
#include <Kismet/GameplayStatics.h>

void UGUIBase::NativeConstruct()
{
	Super::NativeConstruct();

	GameMode = Cast<APrimaryGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
}

void UGUIBase::SetVisibilityState(ESlateVisibility state)
{
	Visibility = state;
	SetVisibility(Visibility);
}

void UGUIBase::SetWidgetOpacity(float value)
{
	SetRenderOpacity(value);
}
