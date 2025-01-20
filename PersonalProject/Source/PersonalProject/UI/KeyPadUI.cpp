#include "KeyPadUI.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"

void UKeyPadUI::NativeConstruct()
{
	Super::NativeConstruct();

	key0->OnClicked.AddDynamic(this, &UKeyPadUI::Key0Press);
	key1->OnClicked.AddDynamic(this, &UKeyPadUI::Key1Press);
	key2->OnClicked.AddDynamic(this, &UKeyPadUI::Key2Press);
	key3->OnClicked.AddDynamic(this, &UKeyPadUI::Key3Press);
	key4->OnClicked.AddDynamic(this, &UKeyPadUI::Key4Press);
	key5->OnClicked.AddDynamic(this, &UKeyPadUI::Key5Press);
	key6->OnClicked.AddDynamic(this, &UKeyPadUI::Key6Press);
	key7->OnClicked.AddDynamic(this, &UKeyPadUI::Key7Press);
	key8->OnClicked.AddDynamic(this, &UKeyPadUI::Key8Press);
	key9->OnClicked.AddDynamic(this, &UKeyPadUI::Key9Press);
}

void UKeyPadUI::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	
}

void UKeyPadUI::Key0Press()
{
}

void UKeyPadUI::Key1Press()
{
}

void UKeyPadUI::Key2Press()
{
}

void UKeyPadUI::Key3Press()
{
}

void UKeyPadUI::Key4Press()
{
}

void UKeyPadUI::Key5Press()
{
}

void UKeyPadUI::Key6Press()
{
}

void UKeyPadUI::Key7Press()
{
}

void UKeyPadUI::Key8Press()
{
}

void UKeyPadUI::Key9Press()
{
}
