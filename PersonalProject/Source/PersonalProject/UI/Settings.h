#pragma once

#include "CoreMinimal.h"
#include "GUIBase.h"
#include "Settings.generated.h"

class UButton;
class UHorizontalBox;

UCLASS()
class PERSONALPROJECT_API USettings : public UGUIBase
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;
	
public:
	UFUNCTION()
	void Back();

	UFUNCTION()
	void Apply();

public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* BackBtn;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* ApplyBtn;
};
