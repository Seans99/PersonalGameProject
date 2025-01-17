#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "PrimaryPlayerCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInteractSignature);

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

	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
	class UInputAction* SprintAction;

	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
	class UInputAction* InteractAction;

protected:
	void Move(const FInputActionValue& InputValue);
	void Jump();
	void Look(const FInputActionValue& InputValue);
	void Attack();
	void StartSprint();
	void StopSprint();
	void Interact();

	UFUNCTION()
	void HandleStaminaDepleted();

public:
	UPROPERTY(EditAnywhere, Category = "Movement")
	float WalkSpeed = 600;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float SprintSpeed = 1200;

public:
	UPROPERTY()
	FInteractSignature OnInteract;

public:
	FVector NavPoint;

private:
	APrimaryGameMode* GameMode;

	bool bIsMoving = false;
	void StoppedMoving();
};
