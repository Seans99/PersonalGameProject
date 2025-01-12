#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door.generated.h"

class UStaticMeshComponent;
class UBoxComponent;

UCLASS()
class PERSONALPROJECT_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	ADoor();

public:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* DoorMesh;

	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxCollider;

	UPROPERTY(EditAnywhere)
	bool bIslocked = false;

	UPROPERTY(EditAnywhere)
	float DoorOpenCloseTime = 1.5f;

	UPROPERTY(EditAnywhere)
	FVector DoorMoveOffset;

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
	void OnBoxEndOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex);

public:	
	virtual void Tick(float DeltaTime) override;

private:
	bool bShouldOpen = false;
	FVector OriginalLocation;
};
