#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjectivePoint.generated.h"

class UBoxComponent;
class APrimaryPlayerCharacter;
class UWidgetComponent;
class UObjectiveUI;

UCLASS()
class PERSONALPROJECT_API AObjectivePoint : public AActor
{
	GENERATED_BODY()
	
public:	
	AObjectivePoint();

public:
	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxComponent;

	UPROPERTY(EditAnywhere, Category = "Info")
	int32 ID;

public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UObjectiveUI> ObjectiveWidgetClass;

	UPROPERTY(EditAnywhere)
	UObjectiveUI* ObjectiveWidget;

	UPROPERTY(EditAnywhere)
	FText ObjectiveTitle;

	UPROPERTY(EditAnywhere)
	FText ObjectiveDesc;

protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION()
	void HideObjectiveWidget();

private:
	TArray<AActor*> ObjectivePoints;
	APrimaryPlayerCharacter* Player;

	bool bObjectiveDisplayed;
	bool bHasBeenTriggered = false;

	FTimerHandle TimerHandle;

public:	
	virtual void Tick(float DeltaTime) override;

};
