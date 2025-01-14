#include "NavPoint.h"
#include <Kismet/GameplayStatics.h>
#include "../PrimarySystems/PrimaryPlayerCharacter.h"
#include "Components/BoxComponent.h"

ANavPoint::ANavPoint()
{
	PrimaryActorTick.bCanEverTick = true;

	BoxCollider = CreateDefaultSubobject<UBoxComponent>("BoxCollider");
	RootComponent = BoxCollider;
}

void ANavPoint::BeginPlay()
{
	Super::BeginPlay();
	
	if (APrimaryPlayerCharacter* Player = Cast<APrimaryPlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)))
	{
		Player->NavPoint = GetActorLocation();
	}
}

void ANavPoint::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<APrimaryPlayerCharacter>(OtherActor))
	{
		
	}
}

void ANavPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

