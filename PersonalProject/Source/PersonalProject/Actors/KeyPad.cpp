#include "KeyPad.h"
#include "Components/WidgetComponent.h"
#include "Components/BoxComponent.h"

AKeyPad::AKeyPad()
{
	KeyPadMesh = CreateDefaultSubobject<UStaticMeshComponent>("Log");
	RootComponent = KeyPadMesh;

	BoxCollider = CreateDefaultSubobject<UBoxComponent>("BoxCollider");
	BoxCollider->SetupAttachment(KeyPadMesh);

	KeyPrompt0 = CreateDefaultSubobject<UWidgetComponent>("KeyPrompt0");
	KeyPrompt0->SetupAttachment(KeyPadMesh);

	KeyPrompt1 = CreateDefaultSubobject<UWidgetComponent>("KeyPrompt1");
	KeyPrompt1->SetupAttachment(KeyPadMesh);

	KeyPrompt2 = CreateDefaultSubobject<UWidgetComponent>("KeyPrompt2");
	KeyPrompt2->SetupAttachment(KeyPadMesh);

	KeyPrompt3 = CreateDefaultSubobject<UWidgetComponent>("KeyPrompt3");
	KeyPrompt3->SetupAttachment(KeyPadMesh);

	KeyPrompt4 = CreateDefaultSubobject<UWidgetComponent>("KeyPrompt4");
	KeyPrompt4->SetupAttachment(KeyPadMesh);

	KeyPrompt5 = CreateDefaultSubobject<UWidgetComponent>("KeyPrompt5");
	KeyPrompt5->SetupAttachment(KeyPadMesh);

	KeyPrompt6 = CreateDefaultSubobject<UWidgetComponent>("KeyPrompt6");
	KeyPrompt6->SetupAttachment(KeyPadMesh);

	KeyPrompt7 = CreateDefaultSubobject<UWidgetComponent>("KeyPrompt7");
	KeyPrompt7->SetupAttachment(KeyPadMesh);

	KeyPrompt8 = CreateDefaultSubobject<UWidgetComponent>("KeyPrompt8");
	KeyPrompt8->SetupAttachment(KeyPadMesh);

	KeyPrompt9 = CreateDefaultSubobject<UWidgetComponent>("KeyPrompt9");
	KeyPrompt9->SetupAttachment(KeyPadMesh);

	KeyPadScreen = CreateDefaultSubobject<UWidgetComponent>("KeyPadScreen");
	KeyPadScreen->SetupAttachment(KeyPadMesh);

	PrimaryActorTick.bCanEverTick = true;
}

void AKeyPad::BeginPlay()
{
	Super::BeginPlay();
	
}

void AKeyPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

