#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TimerManager.h"
#include "StaminaComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStaminaCompSignature);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PERSONALPROJECT_API UStaminaComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UStaminaComponent();

public:
	void LoseStamina();
	void RegainStamina();
	void StopUsingStamina();

public:
	UPROPERTY(EditDefaultsOnly)
	int MaxStamina = 100;

	UPROPERTY(VisibleAnywhere)
	int CurrentStamina;

	UPROPERTY(VisibleAnywhere)
	bool bIsUsingStamina = false;

	UPROPERTY()
	FStaminaCompSignature OnStaminaLoss;

	UPROPERTY()
	FStaminaCompSignature OnStaminaRegain;

	UPROPERTY()
	FStaminaCompSignature OnStaminaDepleted;

private:
	FTimerHandle StaminaTimerHandle;
};
