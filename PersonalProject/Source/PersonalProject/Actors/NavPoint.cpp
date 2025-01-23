#include "NavPoint.h"
#include <Kismet/GameplayStatics.h>
#include "../PrimarySystems/PrimaryPlayerCharacter.h"
#include "Components/BoxComponent.h"

ANavPoint::ANavPoint()
{
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>("BoxCollider");
	RootComponent = BoxComponent;
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ANavPoint::OnBoxBeginOverlap);
}

void ANavPoint::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANavPoint::StaticClass(), NavPoints);
	Player = Cast<APrimaryPlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	if (ID == 1)
	{
		if (Player)
		{
			Player->NavPoint = GetActorLocation();
		}
	}
}

void ANavPoint::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<APrimaryPlayerCharacter>(OtherActor))
	{
		for (auto& NavPoint : NavPoints)
		{
			if (ANavPoint* Nav = Cast<ANavPoint>(NavPoint))
			{
				if (Nav->ID == ID + 1)
				{
					if (Player)
					{
						Player->NavPoint = Nav->GetActorLocation();
					}
				}
			}
		}
	}
}

void ANavPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

