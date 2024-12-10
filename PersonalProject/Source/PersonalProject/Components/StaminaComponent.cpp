#include "StaminaComponent.h"

UStaminaComponent::UStaminaComponent()
{
	CurrentStamina = MaxStamina;

	PrimaryComponentTick.bCanEverTick = true;
}

void UStaminaComponent::LoseStamina()
{
	if (CurrentStamina > 0)
	{
		bIsUsingStamina = true;
		CurrentStamina--;
		if (OnStaminaLoss.IsBound()) OnStaminaLoss.Broadcast();
		GetWorld()->GetTimerManager().ClearTimer(StaminaTimerHandle);
		GetWorld()->GetTimerManager().SetTimer(
			StaminaTimerHandle,
			this,
			&UStaminaComponent::LoseStamina,
			0.01f,
			true
		);
	}
	else
	{
		if (OnStaminaDepleted.IsBound()) OnStaminaDepleted.Broadcast();
		StopUsingStamina();
	}
}

void UStaminaComponent::RegainStamina()
{
	if (CurrentStamina < 100 && !bIsUsingStamina)
	{
		CurrentStamina++;
		if (OnStaminaRegain.IsBound()) OnStaminaRegain.Broadcast();
		GetWorld()->GetTimerManager().SetTimer(
			StaminaTimerHandle,
			this,
			&UStaminaComponent::RegainStamina,
			0.01f,
			true
		);
	}
	else
	{
		GetWorld()->GetTimerManager().ClearTimer(StaminaTimerHandle);
	}
}

void UStaminaComponent::StopUsingStamina()
{
	bIsUsingStamina = false;
	GetWorld()->GetTimerManager().ClearTimer(StaminaTimerHandle);
}

