#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SoundManager.generated.h"

UCLASS()
class PERSONALPROJECT_API USoundManager : public UGameInstanceSubsystem
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
