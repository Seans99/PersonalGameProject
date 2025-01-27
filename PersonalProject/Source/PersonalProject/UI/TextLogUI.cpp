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
            FString NewText = "Log Entry #7492\n\n";
            NewText += "I have reprogrammed the access code to the next room. The door has been offline for a while, but the code ";
            NewText += FString::FromInt(CurrentCode);
            NewText += " should grant access.\n";
            NewText += "- Max";

            Text->SetText(FText::FromString(NewText));
        }
	}
}
