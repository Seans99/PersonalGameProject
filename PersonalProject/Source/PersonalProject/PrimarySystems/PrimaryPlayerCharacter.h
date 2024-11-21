#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "PrimaryPlayerCharacter.generated.h"

class UCameraComponent;
class APrimaryGameMode;
class APrimaryPlayerController;

UCLASS()
class PERSONALPROJECT_API APrimaryPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAcess = "true"))
	UCameraComponent* Camera;

public:
	// Sets default values for this character's properties
	APrimaryPlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
	class UInputMappingContext* InputMapping;

	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
	class UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
	class UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
	class UInputAction* LookAction;

	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
	class UInputAction* AttackAction;

protected:
	void Move(const FInputActionValue& InputValue);
	void Jump();
	void Look(const FInputActionValue& InputValue);
	void Attack();

private:
	APrimaryGameMode* GameMode;
};
