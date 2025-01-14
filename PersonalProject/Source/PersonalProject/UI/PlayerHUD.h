#pragma once

#include "CoreMinimal.h"
#include "GUIBase.h"
#include "PlayerHUD.generated.h"

class APrimaryPlayerCharacter;
class UCameraComponent;

class UHealthComponent;
class UStaminaComponent;

class UCanvasPanel;
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

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCanvasPanel* CompassPanel;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UImage* CompassPoints;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UImage* Objective;

private:
	UFUNCTION()
	void HealthChange();

	UFUNCTION()
	void StaminaChange();

	UFUNCTION()
	void SetDirection();

	UFUNCTION()
	double CheckNavPoint();

	UFUNCTION()
	bool CheckIfbehind();

	FVector GetNavPointRotXNorm2D();

private:
	APrimaryPlayerCharacter* Player;
	UHealthComponent* PlayerHC;
	UStaminaComponent* PlayerSTAM;

	FTimerHandle CompassTimer;

	UCameraComponent* Rotation;
};
