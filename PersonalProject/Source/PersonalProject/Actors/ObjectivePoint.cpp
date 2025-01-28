#include "ObjectivePoint.h"
#include <Kismet/GameplayStatics.h>
#include "../PrimarySystems/PrimaryPlayerCharacter.h"
#include "../PrimarySystems/PrimaryGameMode.h"
#include "Components/BoxComponent.h"
#include "Components/WidgetComponent.h"
#include "../UI/ObjectiveUI.h"
#include "../PrimarySystems/GameInstances/ObjectiveManager.h"

AObjectivePoint::AObjectivePoint()
{
	BoxComponent = CreateDefaultSubobject<UBoxComponent>("BoxCollider");
	RootComponent = BoxComponent;
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AObjectivePoint::OnBoxBeginOverlap);

	PrimaryActorTick.bCanEverTick = true;
}

void AObjectivePoint::BeginPlay()
{
	Super::BeginPlay();

	Gamemode = Cast<APrimaryGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	ObjManager = GetGameInstance()->GetSubsystem<UObjectiveManager>();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AObjectivePoint::StaticClass(), ObjectivePoints);
	Player = Cast<APrimaryPlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	if (Player)
	{
		Player->OnShowJournal.AddDynamic(this, &AObjectivePoint::ShowCurrentObjective);
	}

	if (ObjectiveID == 1)
	{
		if (Player)
		{
			Player->ObjectivePoint = GetActorLocation();
		}
	}
}

void AObjectivePoint::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (APrimaryPlayerCharacter* OverlappingPlayer = Cast<APrimaryPlayerCharacter>(OtherActor))
	{
		bHasBeenTriggered = true;
		OverlappingPlayer->CurrentObjectiveID = ObjectiveID;

		TArray<AActor*> FoundActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AObjectivePoint::StaticClass(), FoundActors);

		for (AActor* Actor : FoundActors)
		{
			AObjectivePoint* Objective = Cast<AObjectivePoint>(Actor);
			if (Objective && Objective->ObjectiveID == ObjectiveID + 1)
			{
				OverlappingPlayer->ObjectivePoint = Objective->GetActorLocation();
				break;
			}
		}

		if (bShowObjectivePopup)
		{
			ObjManager->SetCurrentObjectiveDesc(ObjectiveDesc);
			ObjManager->SetHasObjective(true);
			Gamemode->bShowObjective = true;
		}
	}
}

void AObjectivePoint::ShowCurrentObjective()
{
	if (bShowObjectivePopup)
	{
		if (ObjManager->CheckIfHasObjective())
		{
			if (!Gamemode->bShowObjective)
			{
				Gamemode->bShowObjective = true;
			}
		}
	}
}

void AObjectivePoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

