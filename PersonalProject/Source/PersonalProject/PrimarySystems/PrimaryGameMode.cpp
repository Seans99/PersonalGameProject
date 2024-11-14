#include "PrimaryGameMode.h"
#include "../UI/TitleScreen.h"
#include "PrimaryPlayerController.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"

APrimaryGameMode::APrimaryGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/PrimarySystems/BP_PrimaryPlayerCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	static ConstructorHelpers::FClassFinder<APrimaryPlayerController> ControllerFinder(TEXT("/Game/Blueprints/PrimarySystems/BP_PrimaryPlayerController"));
	PlayerControllerClass = ControllerFinder.Class;

	PrimaryActorTick.bCanEverTick = true;
}

void APrimaryGameMode::BeginPlay()
{
	Super::BeginPlay();

	if (!bDebugMode)
	{
		SetState(EGameState::ETitleScreen);
	}
}

void APrimaryGameMode::Tick(float DeltaTime)
{
	switch (CurrentState)
	{
	case EGameState::ETitleScreen:
		// Logic for Main Menu state
		break;
	case EGameState::EInGame:
		// Logic for In-Game state
		break;
	case EGameState::EPause:
		// Logic for Pause state
		break;
	case EGameState::EGameOver:
		// Logic for Game Over state
		break;
	default:
		break;
	}
}

void APrimaryGameMode::StartPlay()
{
	Super::StartPlay();

	// Dont spawn player when in titlescreen state
	if (CurrentState == EGameState::ETitleScreen)
	{
		return;
	}
}

void APrimaryGameMode::TitleScreenSetup()
{
	if (TitleScreenLevel == "") return;

	Controller = Cast<APrimaryPlayerController>(GetWorld()->GetFirstPlayerController());
	if (Controller)
	{
		Controller->EnableMouse();
	}

	TitleScreenWidget = CreateWidget<UTitleScreen>(GetWorld(), TitleScreenWidgetClass);
	if (TitleScreenWidget)
	{
		TitleScreenWidget->AddToViewport();
	}
}

void APrimaryGameMode::InGameSetup()
{
	if (Level1 == "") return;

	Controller = Cast<APrimaryPlayerController>(GetWorld()->GetFirstPlayerController());
	if (Controller)
	{
		Controller->DisableMouse();
	}
}

void APrimaryGameMode::PauseSetup()
{
	// Logic to pause the game 
}

void APrimaryGameMode::GameOverSetup()
{
	// Logic for Game Over state 
}

void APrimaryGameMode::SetState(EGameState NewState)
{
	switch (NewState)
	{
	case EGameState::ETitleScreen:
		TitleScreenSetup();
		break;
	case EGameState::EInGame:
		InGameSetup();
		break;
	case EGameState::EPause:
		PauseSetup();
		break;
	case EGameState::EGameOver:
		GameOverSetup();
		break;
	default:
		break;
	}
}

EGameState APrimaryGameMode::GetCurrentState() const
{
	return CurrentState;
}
