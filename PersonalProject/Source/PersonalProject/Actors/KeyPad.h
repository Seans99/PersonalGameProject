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
	UWidgetComponent* KeyPadUI;

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

};
