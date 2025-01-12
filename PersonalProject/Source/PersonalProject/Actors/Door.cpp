#include "Door.h"
#include "Components/BoxComponent.h"
#include "../PrimarySystems/PrimaryPlayerCharacter.h"

ADoor::ADoor()
{
	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>("Door");
	DoorMesh->SetupAttachment(RootComponent);

	BoxCollider = CreateDefaultSubobject<UBoxComponent>("BoxCollider");
	BoxCollider->SetupAttachment(RootComponent);
	BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &ADoor::OnBoxBeginOverlap);
	BoxCollider->OnComponentEndOverlap.AddDynamic(this, &ADoor::OnBoxEndOverlap);

	PrimaryActorTick.bCanEverTick = true;
}

void ADoor::BeginPlay()
{
	Super::BeginPlay();
	
	OriginalLocation = DoorMesh->GetComponentLocation();
}

void ADoor::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<APrimaryPlayerCharacter>(OtherActor))
	{
		if (!bIslocked)
		{
			bShouldOpen = true;
		}
	}
}

void ADoor::OnBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (Cast<APrimaryPlayerCharacter>(OtherActor))
	{
		bShouldOpen = false;
	}
}

void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector TargetLocation = OriginalLocation;

	if (bShouldOpen)
	{
		TargetLocation = OriginalLocation + DoorMoveOffset;
	}

	FVector CurrentLocation = DoorMesh->GetComponentLocation();
	float Speed = DoorMoveOffset.Length() / DoorOpenCloseTime;
	FVector NewLocation = FMath::VInterpConstantTo(CurrentLocation, TargetLocation, DeltaTime, Speed);
	DoorMesh->SetRelativeLocation(NewLocation);
}

