#pragma once

#include "CoreMinimal.h"
#include "GUIBase.h"
#include "ObjectiveUI.generated.h"

class UCanvasPanel;
class UTextBlock;

UCLASS()
class PERSONALPROJECT_API UObjectiveUI : public UGUIBase
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;
	
public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCanvasPanel* ObjectivePanel;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* ObjectiveTitle;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* ObjectiveDesc;

private:
	FText ObjTitle;
	FText ObjDesc;

public:
	void SetObjective(FText NewObjTitle, FText NewObjDesc);
};
