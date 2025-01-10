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

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
