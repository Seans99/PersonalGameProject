#include "KeyPadUI.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "../PrimarySystems/GameInstances/CodeGenerator.h"
#include "../Actors/Door.h"
#include "../Actors/KeyPad.h"
#include <Kismet/GameplayStatics.h>

void UKeyPadUI::NativeConstruct()
{
	Super::NativeConstruct();

	Code = GetGameInstance()->GetSubsystem<UCodeGenerator>();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ADoor::StaticClass(), Doors);

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
	FString EnteredCode;

	for (int32 Num : PassCode)
	{
		EnteredCode += FString::FromInt(Num);
	}

	if (PassCode.Num() < 4)
	{
		if (EnteredCode != "")
		{
			Screen->SetText(FText::FromString(EnteredCode));
		}
	}

	if (PassCode.Num() == 4)
	{
		int32 CurrentCode = Code->GetRandomCode();
		FString CodeString = FString::FromInt(CurrentCode);

		if (EnteredCode == CodeString)
		{
			FString Unlocked = "Valid";
			Screen->SetText(FText::FromString(Unlocked));

			for (AActor* Door : Doors)
			{
				if (Door && Door->Tags.Contains(DoorToOpen))
				{
					if (ADoor* LockedDoor = Cast<ADoor>(Door))
					{
						if (LockedDoor->bIslocked)
						{
							LockedDoor->bIslocked = false;
						}
					}
				}
			}
		}
		else
		{
			FString Locked = "Invalid";
			Screen->SetText(FText::FromString(Locked));
			EnteredCode = "";
			PassCode.Empty();
		}
	}
}

void UKeyPadUI::Key0Press()
{
	if (PassCode.Num() < 4)
	{
		PassCode.Add(0);
	}
}

void UKeyPadUI::Key1Press()
{
	if (PassCode.Num() < 4)
	{
		PassCode.Add(1);
	}
}

void UKeyPadUI::Key2Press()
{
	if (PassCode.Num() < 4)
	{
		PassCode.Add(2);
	}
}

void UKeyPadUI::Key3Press()
{
	if (PassCode.Num() < 4)
	{
		PassCode.Add(3);
	}
}

void UKeyPadUI::Key4Press()
{
	if (PassCode.Num() < 4)
	{
		PassCode.Add(4);
	}
}

void UKeyPadUI::Key5Press()
{
	if (PassCode.Num() < 4)
	{
		PassCode.Add(5);
	}
}

void UKeyPadUI::Key6Press()
{
	if (PassCode.Num() < 4)
	{
		PassCode.Add(6);
	}
}

void UKeyPadUI::Key7Press()
{
	if (PassCode.Num() < 4)
	{
		PassCode.Add(7);
	}
}

void UKeyPadUI::Key8Press()
{
	if (PassCode.Num() < 4)
	{
		PassCode.Add(8);
	}
}

void UKeyPadUI::Key9Press()
{
	if (PassCode.Num() < 4)
	{
		PassCode.Add(9);
	}
}


