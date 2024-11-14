#include "PrimaryGameMode.h"
#include "../UI/TitleScreen.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"

APrimaryGameMode::APrimaryGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/PrimarySystems/BP_PrimaryPlayerCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	PrimaryActorTick.bCanEverTick = true;
}

void APrimaryGameMode::BeginPlay()
{
	Super::BeginPlay();

	SetState(EGameState::ETitleScreen);
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

	UGameplayStatics::OpenLevel(this, TitleScreenLevel);

	TitleScreenWidget = CreateWidget<UTitleScreen>(GetWorld(), TitleScreenWidgetClass);
	if (TitleScreenWidget)
	{
		TitleScreenWidget->AddToViewport();
	}
}

void APrimaryGameMode::InGameSetup()
{
	if (Level1 == "") return;

	UGameplayStatics::OpenLevel(this, Level1);
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
