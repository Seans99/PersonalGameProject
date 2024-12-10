#pragma once

#include "CoreMinimal.h"
#include "GUIBase.h"
#include "PlayerHUD.generated.h"

class APrimaryPlayerCharacter;
class UHealthComponent;
class UStaminaComponent;

class UProgressBar;
class UTextBlock;
class UImage;

UCLASS()
class PERSONALPROJECT_API UPlayerHUD : public UGUIBase
{
	GENERATED_BODY()
	
protected:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& Geometry, float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UProgressBar* HealthBar;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UProgressBar* StaminaBar;

private:
	UFUNCTION()
	void HealthChange();

	UFUNCTION()
	void StaminaChange();

private:
	APrimaryPlayerCharacter* Player;
	UHealthComponent* PlayerHC;
	UStaminaComponent* PlayerSTAM;
};
