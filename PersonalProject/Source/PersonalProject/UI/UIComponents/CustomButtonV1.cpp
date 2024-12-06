#include "CustomButtonV1.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"


void UCustomButtonV1::NativeConstruct()
{
	Super::NativeConstruct();

	Button->OnHovered.AddDynamic(this, &UCustomButtonV1::HoverEffect);
	Button->OnUnhovered.AddDynamic(this, &UCustomButtonV1::UnHoverEffect);
	Button->OnClicked.AddDynamic(this, &UCustomButtonV1::BroadcastOnClicked);
	SetButtonText(NewButtonText);
}

void UCustomButtonV1::HoverEffect()
{
	ButtonText->SetColorAndOpacity(HoveredTextColor);
}

void UCustomButtonV1::UnHoverEffect()
{
	ButtonText->SetColorAndOpacity(DefaultTextColor);
}

void UCustomButtonV1::SetButtonText(FString Text)
{
	FText newText = FText::FromString(Text);
	ButtonText->SetText(newText);
}

void UCustomButtonV1::IsActiveButton(bool Active)
{
	if (Active)
	{
		Button->WidgetStyle.Normal.TintColor = ActiveButtonColor;
		ButtonText->SetColorAndOpacity(HoveredTextColor);
	}

	if (!Active)
	{
		Button->WidgetStyle.Normal.TintColor = DefaultButtonColor;
		ButtonText->SetColorAndOpacity(DefaultTextColor);
	}
}

void UCustomButtonV1::BroadcastOnClicked()
{
	OnClicked.Broadcast();
}
