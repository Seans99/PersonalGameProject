#pragma once

#include "CoreMinimal.h"
#include "GUIBase.h"
#include "TextLogUI.generated.h"

class UImage;
class UMultiLineEditableText;

class UCodeGenerator;

UCLASS()
class PERSONALPROJECT_API UTextLogUI : public UGUIBase
{
	GENERATED_BODY()
	
protected:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UImage* Background;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UMultiLineEditableText* Text;

private:
	UCodeGenerator* Code;
};
