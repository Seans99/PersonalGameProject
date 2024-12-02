#include "HealthComponent.h"

UHealthComponent::UHealthComponent()
{
	CurrentHealth = MaxHealth;
}

void UHealthComponent::TakeDamage(float Damage)
{
	CurrentHealth -= Damage;
	if (OnDamage.IsBound()) OnDamage.Broadcast();
	if (CurrentHealth <= 0.0f)
	{
		CurrentHealth = 0.0f;
		if (OnDeath.IsBound()) OnDeath.Broadcast();
	}
}

