#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KeyPad.generated.h"

class UWidgetComponent;
class UBoxComponent;

UCLASS()
class PERSONALPROJECT_API AKeyPad : public AActor
{
	GENERATED_BODY()
	
public:
	AKeyPad();

public:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* KeyPadMesh;

	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxCollider;

	UPROPERTY(EditAnywhere)
	UWidgetComponent* KeyPrompt0;

	UPROPERTY(EditAnywhere)
	UWidgetComponent* KeyPrompt1;

	UPROPERTY(EditAnywhere)
	UWidgetComponent* KeyPrompt2;

	UPROPERTY(EditAnywhere)
	UWidgetComponent* KeyPrompt3;

	UPROPERTY(EditAnywhere)
	UWidgetComponent* KeyPrompt4;

	UPROPERTY(EditAnywhere)
	UWidgetComponent* KeyPrompt5;

	UPROPERTY(EditAnywhere)
	UWidgetComponent* KeyPrompt6;

	UPROPERTY(EditAnywhere)
	UWidgetComponent* KeyPrompt7;

	UPROPERTY(EditAnywhere)
	UWidgetComponent* KeyPrompt8;

	UPROPERTY(EditAnywhere)
	UWidgetComponent* KeyPrompt9;

	UPROPERTY(EditAnywhere)
	UWidgetComponent* KeyPadScreen;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
