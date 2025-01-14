#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NavPoint.generated.h"

class UBoxComponent;

UCLASS()
class PERSONALPROJECT_API ANavPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	ANavPoint();

public:
	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxCollider;

protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

public:	
	virtual void Tick(float DeltaTime) override;

};
