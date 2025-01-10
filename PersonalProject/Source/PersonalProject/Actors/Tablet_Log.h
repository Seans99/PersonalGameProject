#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tablet_Log.generated.h"

class UStaticMeshComponent;
class UPointLightComponent;
class UWidgetComponent;

UCLASS()
class PERSONALPROJECT_API ATablet_Log : public AActor
{
	GENERATED_BODY()
	
public:	
	ATablet_Log();

public:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* LogMesh;

	UPROPERTY(EditAnywhere)
	UPointLightComponent* PointLight;

	UPROPERTY(EditAnywhere)
	UWidgetComponent* KeyPrompt;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
