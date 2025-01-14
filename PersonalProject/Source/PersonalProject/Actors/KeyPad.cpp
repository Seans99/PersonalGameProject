#include "KeyPad.h"
#include "Components/WidgetComponent.h"
#include "Components/BoxComponent.h"
#include "../PrimarySystems/PrimaryPlayerCharacter.h"

AKeyPad::AKeyPad()
{
	KeyPadMesh = CreateDefaultSubobject<UStaticMeshComponent>("Log");
	RootComponent = KeyPadMesh;

	BoxCollider = CreateDefaultSubobject<UBoxComponent>("BoxCollider");
	BoxCollider->SetupAttachment(KeyPadMesh);

	KeyPadUI = CreateDefaultSubobject<UWidgetComponent>("KeyPadUI");
	KeyPadUI->SetupAttachment(KeyPadMesh);

	PrimaryActorTick.bCanEverTick = true;
}

void AKeyPad::BeginPlay()
{
	Super::BeginPlay();
	
}

void AKeyPad::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<APrimaryPlayerCharacter>(OtherActor))
	{
		KeyPadUI->SetVisibility(true);
	}
}

void AKeyPad::OnBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (Cast<APrimaryPlayerCharacter>(OtherActor))
	{
		KeyPadUI->SetVisibility(false);
	}
}

void AKeyPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

