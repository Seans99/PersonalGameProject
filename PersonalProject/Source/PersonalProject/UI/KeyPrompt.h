#pragma once

#include "CoreMinimal.h"
#include "GUIBase.h"
#include "KeyPrompt.generated.h"

class UVerticalBox;
class UEditableTextBox;

UCLASS()
class PERSONALPROJECT_API UKeyPrompt : public UGUIBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UEditableTextBox* InteractKey;
};
