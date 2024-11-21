#include "Settings.h"
#include "../PrimarySystems/PrimaryGameMode.h"
#include "Components/Button.h"
#include "Components/HorizontalBox.h"
#include <Kismet/GameplayStatics.h>

void USettings::NativeConstruct()
{
	Super::NativeConstruct();

	BackBtn->OnClicked.AddDynamic(this, &USettings::Back);
	ApplyBtn->OnClicked.AddDynamic(this, &USettings::Apply);
}

void USettings::Back()
{
	FString CurrentLevel = UGameplayStatics::GetCurrentLevelName(GetWorld());

	if (CurrentLevel == GameMode->MainLevel) GameMode->SetState(EGameState::EMainMenu);
	if (CurrentLevel == GameMode->Level1) GameMode->SetState(EGameState::EPause);
}

void USettings::Apply()
{
	// Apply settings
}
