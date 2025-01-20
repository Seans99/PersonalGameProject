#include "Tablet_Log.h"
#include "Components/PointLightComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/BoxComponent.h"
#include "../PrimarySystems/PrimaryPlayerCharacter.h"

ATablet_Log::ATablet_Log()
{
	LogMesh = CreateDefaultSubobject<UStaticMeshComponent>("Log");
	RootComponent = LogMesh;

	PointLight = CreateDefaultSubobject<UPointLightComponent>("PointLight");
	PointLight->SetupAttachment(LogMesh);

	KeyPrompt = CreateDefaultSubobject<UWidgetComponent>("KeyPromptWidget");
	KeyPrompt->SetupAttachment(LogMesh);

	Log = CreateDefaultSubobject<UWidgetComponent>("LogUI");
	Log->SetupAttachment(LogMesh);

	BoxComponent = CreateDefaultSubobject<UBoxComponent>("BoxComponent");
	BoxComponent->SetupAttachment(LogMesh);
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ATablet_Log::OnBoxBeginOverlap);
	BoxComponent->OnComponentEndOverlap.AddDynamic(this, &ATablet_Log::OnBoxEndOverlap);

	PrimaryActorTick.bCanEverTick = true;
}

void ATablet_Log::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATablet_Log::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<APrimaryPlayerCharacter>(OtherActor))
	{
		KeyPrompt->SetVisibility(true);
	}
}

void ATablet_Log::OnBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (Cast<APrimaryPlayerCharacter>(OtherActor))
	{
		KeyPrompt->SetVisibility(false);
	}
}

void ATablet_Log::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

