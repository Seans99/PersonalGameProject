#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CustomButtonV1.generated.h"

class UButton;
class UTextBlock;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnButtonClicked);

UCLASS()
class PERSONALPROJECT_API UCustomButtonV1 : public UUserWidget
{
	GENERATED_BODY()
	
private:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* Button;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* ButtonText;

public:
	UFUNCTION()
	void HoverEffect();

	UFUNCTION()
	void UnHoverEffect();

	UFUNCTION()
	void SetButtonText(FString Text);

	UFUNCTION()
	void IsActiveButton(bool state);

	UFUNCTION()
	void BroadcastOnClicked();

	UPROPERTY()
	FOnButtonClicked OnClicked;

private:
	FSlateColor DefaultTextColor = FSlateColor(FLinearColor(0.47451, 0.596078, 0.596078, 0.8));
	FSlateColor HoveredTextColor = FSlateColor(FLinearColor(0.002732, 0.005182, 0.008023, 1.0));

	FSlateColor DefaultButtonColor = FSlateColor(FLinearColor(0.0, 0.0, 0.0, 0.0));
	FSlateColor ActiveButtonColor = FSlateColor(FLinearColor(0.47451, 0.596078, 0.596078, 0.14902));

public:
	UPROPERTY(EditAnywhere)
	FString NewButtonText = "";
};
