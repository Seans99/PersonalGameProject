#include "PrimaryPlayerCharacter.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "../PrimarySystems/PrimaryGameMode.h"

// Sets default values
APrimaryPlayerCharacter::APrimaryPlayerCharacter()
{
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(RootComponent);
	Camera->bUsePawnControlRotation = true;

	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APrimaryPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APrimaryPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APrimaryPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(InputMapping, 0);
		}
	}

	if (UEnhancedInputComponent* Input = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		Input->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APrimaryPlayerCharacter::Move);
		Input->BindAction(JumpAction, ETriggerEvent::Triggered, this, &APrimaryPlayerCharacter::Jump);
		Input->BindAction(LookAction, ETriggerEvent::Triggered, this, &APrimaryPlayerCharacter::Look);
		Input->BindAction(AttackAction, ETriggerEvent::Triggered, this, &APrimaryPlayerCharacter::Attack);
		Input->BindAction(PauseAction, ETriggerEvent::Triggered, this, &APrimaryPlayerCharacter::PauseGame);
	}
}

void APrimaryPlayerCharacter::Move(const FInputActionValue& InputValue)
{
	FVector2D InputVector = InputValue.Get<FVector2D>();

	const FVector ForwardDirection = GetActorForwardVector();
	const FVector RightDirection = GetActorRightVector();

	AddMovementInput(ForwardDirection, InputVector.Y);
	AddMovementInput(RightDirection, InputVector.X);
}

void APrimaryPlayerCharacter::Jump()
{
	ACharacter::Jump();
}

void APrimaryPlayerCharacter::Look(const FInputActionValue& InputValue)
{
	FVector2D InputVector = InputValue.Get<FVector2D>();

	if (IsValid(Controller))
	{
		AddControllerYawInput(InputVector.X);
		AddControllerPitchInput(InputVector.Y);
	}
}

void APrimaryPlayerCharacter::Attack()
{
	
}

void APrimaryPlayerCharacter::PauseGame()
{
	
}

