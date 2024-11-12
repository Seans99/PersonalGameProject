#include "PrimaryGameMode.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/Actor.h"

APrimaryGameMode::APrimaryGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/PrimarySystems/BP_PrimaryPlayerCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
}

void APrimaryGameMode::BeginPlay()
{
	Super::BeginPlay();
}
