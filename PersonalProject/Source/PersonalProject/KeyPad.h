#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KeyPad.generated.h"

UCLASS()
class PERSONALPROJECT_API AKeyPad : public AActor
{
	GENERATED_BODY()
	
public:
	AKeyPad();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
