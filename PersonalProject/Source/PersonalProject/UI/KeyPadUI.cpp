#include "KeyPadUI.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "../PrimarySystems/GameInstances/CodeGenerator.h"
#include "../Actors/Door.h"
#include "../Actors/KeyPad.h"
#include <Kismet/GameplayStatics.h>

void UKeyPadUI::NativeConstruct()
{
	Super::NativeConstruct();

	Code = GetGameInstance()->GetSubsystem<UCodeGenerator>();
	if (!Code)
	{
		UE_LOG(LogTemp, Error, TEXT("CodeGenerator subsystem is null!"));
	}

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ADoor::StaticClass(), Doors);
	if (Doors.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("No doors found in the level!"));
	}

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
	if (!Code)
	{
		return;
	}

	FString EnteredCode;

	for (int32 Num : PassCode)
	{
		EnteredCode += FString::FromInt(Num);
	}

	if (PassCode.Num() < 4)
	{
		if (EnteredCode != "")
		{
			ScreenText->SetText(FText::FromString(EnteredCode));
		}
	}

	if (PassCode.Num() == 4)
	{
		int32 CurrentCode = Code->GetRandomCode();
		FString CodeString = FString::FromInt(CurrentCode);

		if (EnteredCode == CodeString)
		{
			FString Unlocked = "Unlocked";
			ScreenText->SetText(FText::FromString(Unlocked));
			ScreenText->SetColorAndOpacity(FSlateColor(FLinearColor::Green));

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
			FString Locked = "Error";
			ScreenText->SetText(FText::FromString(Locked));
			ScreenText->SetColorAndOpacity(FSlateColor(FLinearColor::Red));
			EnteredCode = "";
			PassCode.Empty();
		}
	}
}

void UKeyPadUI::OnKeyPress(int32 KeyNum)
{
	if (PassCode.Num() < 4)
	{
		PassCode.Add(KeyNum);
		ScreenText->SetColorAndOpacity(FSlateColor(FLinearColor::White));
	}
}

void UKeyPadUI::Key0Press()
{
	OnKeyPress(0);
}
void UKeyPadUI::Key1Press()
{
	OnKeyPress(1);
}
void UKeyPadUI::Key2Press()
{
	OnKeyPress(2);
}
void UKeyPadUI::Key3Press()
{
	OnKeyPress(3);
}
void UKeyPadUI::Key4Press()
{
	OnKeyPress(4);
}
void UKeyPadUI::Key5Press()
{
	OnKeyPress(5);
}
void UKeyPadUI::Key6Press()
{
	OnKeyPress(6);
}
void UKeyPadUI::Key7Press()
{
	OnKeyPress(7);
}
void UKeyPadUI::Key8Press()
{
	OnKeyPress(8);
}
void UKeyPadUI::Key9Press()
{
	OnKeyPress(9);
}


