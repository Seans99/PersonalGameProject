#include "ObjectivePoint.h"
#include <Kismet/GameplayStatics.h>
#include "../PrimarySystems/PrimaryPlayerCharacter.h"
#include "Components/BoxComponent.h"
#include "Components/WidgetComponent.h"
#include "../UI/ObjectiveUI.h"

AObjectivePoint::AObjectivePoint()
{
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>("BoxCollider");
	RootComponent = BoxComponent;
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AObjectivePoint::OnBoxBeginOverlap);
}

void AObjectivePoint::BeginPlay()
{
	Super::BeginPlay();

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

	if (bShowObjectivePopup)
	{
		if (ObjectiveWidget)
		{
			ObjectiveWidget = CreateWidget<UObjectiveUI>(GetWorld(), ObjectiveWidgetClass);
			if (ObjectiveWidget)
			{
				ObjectiveWidget->AddToViewport();
				ObjectiveWidget->SetObjective(ObjectiveTitle, ObjectiveDesc);
				ObjectiveWidget->SetVisibility(ESlateVisibility::Hidden);
			}
		}
	}
}

void AObjectivePoint::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (APrimaryPlayerCharacter* OverlappingPlayer = Cast<APrimaryPlayerCharacter>(OtherActor))
	{
		bHasBeenTriggered = true;
		OverlappingPlayer->CurrentObjectiveID = ObjectiveID;

		TArray<AActor*> ObjectivePoints;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AObjectivePoint::StaticClass(), ObjectivePoints);

		for (AActor* Point : ObjectivePoints)
		{
			AObjectivePoint* Objective = Cast<AObjectivePoint>(Point);
			if (Objective && Objective->ObjectiveID == ObjectiveID + 1)
			{
				OverlappingPlayer->ObjectivePoint = Objective->GetActorLocation();
				break;
			}
		}

		if (bShowObjectivePopup && ObjectiveWidget)
		{
			DisplayObjectiveWidget();
		}
	}
}

void AObjectivePoint::DisplayObjectiveWidget()
{
	if (ObjectiveWidget || !bObjectiveDisplayed)
	{
		bObjectiveDisplayed = true;
		ObjectiveWidget->SetVisibility(ESlateVisibility::Visible);

		// Hide widget after a delay
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AObjectivePoint::HideObjectiveWidget, 3.f, false);
	}
}

void AObjectivePoint::HideObjectiveWidget()
{
	if (ObjectiveWidget)
	{
		bObjectiveDisplayed = false;
		ObjectiveWidget->SetVisibility(ESlateVisibility::Hidden);
		if (GetWorld()->GetTimerManager().IsTimerActive(TimerHandle))
		{
			GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
		}
	}
}

void AObjectivePoint::ShowCurrentObjective()
{
	if (Player && Player->CurrentObjectiveID == ObjectiveID && ObjectiveWidget && !bObjectiveDisplayed)
	{
		FText CurrentObjectiveTitle = FText::FromString(TEXT("Current Objective"));
		ObjectiveWidget->SetObjective(CurrentObjectiveTitle, ObjectiveDesc);
		DisplayObjectiveWidget();
	}
}

void AObjectivePoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

