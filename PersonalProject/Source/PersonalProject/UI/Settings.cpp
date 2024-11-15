#include "Settings.h"
#include "Components/Button.h"
#include "Components/HorizontalBox.h"

void USettings::NativeConstruct()
{
	Super::NativeConstruct();

	BackBtn->OnClicked.AddDynamic(this, &USettings::Back);
	ApplyBtn->OnClicked.AddDynamic(this, &USettings::Apply);
}

void USettings::Back()
{
	// Close settings and open titlescreen menu
}

void USettings::Apply()
{
	// Apply settings and close setting / open titlescreen menu
}
