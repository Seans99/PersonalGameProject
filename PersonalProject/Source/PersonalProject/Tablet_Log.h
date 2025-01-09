#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tablet_Log.generated.h"

UCLASS()
class PERSONALPROJECT_API ATablet_Log : public AActor
{
	GENERATED_BODY()
	
public:	
	ATablet_Log();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
