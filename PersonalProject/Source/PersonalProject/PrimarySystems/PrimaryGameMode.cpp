#include "PrimaryGameMode.h"
#include "../UI/TitleScreen.h"
#include "../UI/MainMenu.h"
#include "../UI/Settings.h"
#include "../UI/PauseMenu.h"
#include "../UI/PlayerHUD.h"
#include "../UI/UIComponents/CustomButtonV1.h"
#include "PrimaryPlayerController.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"
#include "Components/CanvasPanelSlot.h"

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

	FString CurrentLevel = UGameplayStatics::GetCurrentLevelName(this);

	if (CurrentLevel == MainLevel)
	{
		SetState(EGameState::ETitleScreen);
	}
	if (CurrentLevel == Level1)
	{
		SetState(EGameState::EInGame);
	}
}

void APrimaryGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APrimaryGameMode::TitleScreenSetup()
{
	if (MainLevel == "") return;

	CurrentState = EGameState::ETitleScreen;

	Controller = Cast<APrimaryPlayerController>(GetWorld()->GetFirstPlayerController());
	if (Controller)
	{
		Controller->EnableMouse();
		Controller->DisableInput(Controller);
	}

	TitleScreenWidget = CreateWidget<UTitleScreen>(GetWorld(), TitleScreenWidgetClass);
	if (TitleScreenWidget)
	{
		TitleScreenWidget->AddToViewport();
	}
}

void APrimaryGameMode::MainMenuSetup()
{
	if (MainLevel == "") return;

	CurrentState = EGameState::EMainMenu;

	if (TitleScreenWidget)
	{
		TitleScreenWidget->RemoveFromParent();
		TitleScreenWidget = nullptr;
	}

	if (SettingsWidget)
	{
		SettingsWidget->SetVisibility(ESlateVisibility::Hidden);
	}

	Controller = Cast<APrimaryPlayerController>(GetWorld()->GetFirstPlayerController());
	if (Controller)
	{
		Controller->EnableMouse();
		Controller->DisableInput(Controller);
	}

	if (MainMenuWidget)
	{
		MainMenuWidget->SettingsButton->IsActiveButton(false);
	}

	if (!MainMenuWidget)
	{
		MainMenuWidget = CreateWidget<UMainMenu>(GetWorld(), MainMenuWidgetClass);
		if (MainMenuWidget)
		{
			MainMenuWidget->AddToViewport();
		}
	}
}

void APrimaryGameMode::SettingsSetup()
{
	if (Level1 == "" || MainLevel == "") return;

	CurrentState = EGameState::ESettings;

	Controller = Cast<APrimaryPlayerController>(GetWorld()->GetFirstPlayerController());
	if (Controller)
	{
		Controller->EnableMouse();
		Controller->DisableInput(Controller);
	}

	SettingsWidget = CreateWidget<USettings>(GetWorld(), SettingsWidgetClass);
	if (SettingsWidget)
	{
		SettingsWidget->AddToViewport();
	}
}

void APrimaryGameMode::InGameSetup()
{
	if (Level1 == "") return;

	CurrentState = EGameState::EInGame;

	if (MainMenuWidget)
	{
		MainMenuWidget->SetVisibility(ESlateVisibility::Hidden);
	}

	if (PauseMenuWidget)
	{
		PauseMenuWidget->SetVisibility(ESlateVisibility::Hidden);
	}

	PlayerHudWidget = CreateWidget<UPlayerHUD>(GetWorld(), PlayerHudWidgetClass);
	if (PlayerHudWidget)
	{
		PlayerHudWidget->AddToViewport();
	}

	Controller = Cast<APrimaryPlayerController>(GetWorld()->GetFirstPlayerController());
	if (Controller)
	{
		Controller->DisableMouse();
		Controller->EnableInput(Controller);
	}
}

void APrimaryGameMode::PauseSetup()
{
	if (Level1 == "") return;

	CurrentState = EGameState::EPause;
	UGameplayStatics::SetGamePaused(GetWorld(), true);

	if (SettingsWidget)
	{
		SettingsWidget->SetVisibility(ESlateVisibility::Hidden);
	}

	if (PlayerHudWidget)
	{
		PlayerHudWidget->SetVisibility(ESlateVisibility::Hidden);
	}

	Controller = Cast<APrimaryPlayerController>(GetWorld()->GetFirstPlayerController());
	if (Controller)
	{
		Controller->EnableMouse();
	}

	if (PauseMenuWidget)
	{
		PauseMenuWidget->SettingsButton->IsActiveButton(false);
		PauseMenuWidget->SetVisibility(ESlateVisibility::Visible);
	}

	if (!PauseMenuWidget)
	{
		PauseMenuWidget = CreateWidget<UPauseMenu>(GetWorld(), PauseMenuWidgetClass);
		if (PauseMenuWidget)
		{
			PauseMenuWidget->AddToViewport();
		}
	}
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
	case EGameState::EMainMenu:
		MainMenuSetup();
		break;
	case EGameState::ESettings:
		SettingsSetup();
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
