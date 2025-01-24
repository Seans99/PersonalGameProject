#include "ObjectiveUI.h"
#include "Components/TextBlock.h"

void UObjectiveUI::NativeConstruct()
{
	Super::NativeConstruct();
}

void UObjectiveUI::SetObjective(FText NewObjTitle, FText NewObjDesc)
{
	ObjTitle = NewObjTitle;
	ObjDesc = NewObjDesc;

	if (ObjectiveTitle)
	{
		ObjectiveTitle->SetText(ObjTitle);
	}
	if (ObjectiveDesc)
	{
		ObjectiveDesc->SetText(ObjDesc);
	}
}
