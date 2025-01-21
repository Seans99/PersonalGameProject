#include "TextLogUI.h"
#include "../PrimarySystems/GameInstances/CodeGenerator.h"
#include "Components/MultiLineEditableText.h"

void UTextLogUI::NativeConstruct()
{
	Super::NativeConstruct();

	Code = GetGameInstance()->GetSubsystem<UCodeGenerator>();

	if (Code)
	{
		int32 CurrentCode = Code->GetRandomCode();
		if (CurrentCode)
		{
			FString NewText = "The pass code is ";
			NewText += FString::FromInt(CurrentCode);
			Text->SetText(FText::FromString(NewText));
		}
	}
}
