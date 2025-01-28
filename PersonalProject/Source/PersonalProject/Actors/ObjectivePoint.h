#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjectivePoint.generated.h"

class UBoxComponent;
class APrimaryPlayerCharacter;
class UWidgetComponent;
class UObjectiveUI;
class APrimaryGameMode;
class UObjectiveManager;

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
	int32 ObjectiveID;

	UPROPERTY(EditAnywhere, Category = "Info")
	bool bShowObjectivePopup = false;

public:
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
	void ShowCurrentObjective();

private:
	TArray<AActor*> ObjectivePoints;
	APrimaryPlayerCharacter* Player;

	bool bObjectiveDisplayed;
	bool bHasBeenTriggered = false;

	FTimerHandle TimerHandle;

private:
	APrimaryGameMode* Gamemode;
	UObjectiveManager* ObjManager;

public:	
	virtual void Tick(float DeltaTime) override;

};
