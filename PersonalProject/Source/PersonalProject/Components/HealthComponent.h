#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHealthCompSignature);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PERSONALPROJECT_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UHealthComponent();

public:
	void TakeDamage(float Damage);

public:
	UPROPERTY(EditDefaultsOnly)
	int MaxHealth = 100;

	UPROPERTY(VisibleAnywhere)
	int CurrentHealth;

	UPROPERTY()
	FHealthCompSignature OnDamage;

	UPROPERTY()
	FHealthCompSignature OnDeath;
};
