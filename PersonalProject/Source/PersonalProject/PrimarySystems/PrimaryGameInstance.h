#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PrimaryGameInstance.generated.h"

UCLASS()
class PERSONALPROJECT_API UPrimaryGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
private:
	UPROPERTY()
	float MasterVolume = 1.0f;

	UPROPERTY()
	float MusicVolume = 1.0f;

public:
	void SetMasterVolume(float Volume);
	float GetMasterVolume();
	void SetMusicVolume(float Volume);
	float GetMusicVolume();
};
