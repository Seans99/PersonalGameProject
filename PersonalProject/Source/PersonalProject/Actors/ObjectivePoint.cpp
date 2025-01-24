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

	if (ID == 1)
	{
		if (Player)
		{
			Player->ObjectivePoint = GetActorLocation();
		}
	}

	if (ObjectiveWidget)
	{
		ObjectiveWidget = CreateWidget<UObjectiveUI>(GetWorld(), ObjectiveWidgetClass);
		if (ObjectiveWidget)
		{
			ObjectiveWidget->AddToViewport();
		}
		ObjectiveWidget->SetObjective(ObjectiveTitle, ObjectiveDesc);
		ObjectiveWidget->SetVisibility(ESlateVisibility::Hidden);
	}
}

void AObjectivePoint::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<APrimaryPlayerCharacter>(OtherActor))
	{
		bHasBeenTriggered = true;
		if (!bHasBeenTriggered)
		{
			for (auto& ObjPoint : ObjectivePoints)
			{
				if (AObjectivePoint* Objective = Cast<AObjectivePoint>(ObjPoint))
				{
					if (Objective->ID += 1)
					{
						if (Player)
						{
							Player->ObjectivePoint = Objective->GetActorLocation();
						}
					}
				}
			}

			if (!bObjectiveDisplayed)
			{
				bObjectiveDisplayed = true;
				ObjectiveWidget->SetVisibility(ESlateVisibility::Visible);
				GetWorld()->GetTimerManager().SetTimer(
					TimerHandle,
					this,
					&AObjectivePoint::HideObjectiveWidget,
					3.f,
					false
				);
			}
		}
	}
}

void AObjectivePoint::HideObjectiveWidget()
{
	if (ObjectiveWidget)
	{
		ObjectiveWidget->SetVisibility(ESlateVisibility::Hidden);
	}
}

void AObjectivePoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

