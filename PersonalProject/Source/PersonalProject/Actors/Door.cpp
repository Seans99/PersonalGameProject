#include "Door.h"
#include "Components/BoxComponent.h"

ADoor::ADoor()
{
	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>("Door");
	RootComponent = DoorMesh;

	BoxCollider = CreateDefaultSubobject<UBoxComponent>("BoxCollider");
	BoxCollider->SetupAttachment(DoorMesh);

	PrimaryActorTick.bCanEverTick = true;
}

void ADoor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

