#include "Tablet_Log.h"
#include "Components/PointLightComponent.h"
#include "Components/WidgetComponent.h"

ATablet_Log::ATablet_Log()
{
	LogMesh = CreateDefaultSubobject<UStaticMeshComponent>("Log");
	RootComponent = LogMesh;

	PointLight = CreateDefaultSubobject<UPointLightComponent>("PointLight");
	PointLight->SetupAttachment(LogMesh);

	KeyPrompt = CreateDefaultSubobject<UWidgetComponent>("KeyPromptWidget");
	KeyPrompt->SetupAttachment(LogMesh);

	PrimaryActorTick.bCanEverTick = true;
}

void ATablet_Log::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATablet_Log::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

