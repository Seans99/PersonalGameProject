#include "PrimaryGameInstance.h"
#include "Sound/SoundMix.h"
#include "Sound/SoundClass.h"

void UPrimaryGameInstance::SetMasterVolume(float Volume)
{
	MasterVolume = FMath::Clamp(Volume, 0.0f, 1.0f);

	static const FName MasterSoundClassName = "SFX_Master";
	USoundClass* MasterSoundClass = FindObject<USoundClass>(nullptr, *MasterSoundClassName.ToString());

	if (MasterSoundClass)
	{
		MasterSoundClass->Properties.Volume = MasterVolume;
	}
}

float UPrimaryGameInstance::GetMasterVolume()
{
	return MasterVolume;
}

void UPrimaryGameInstance::SetMusicVolume(float Volume)
{
	MusicVolume = FMath::Clamp(Volume, 0.0f, 1.0f);

	static const FName MusicSoundClassName = "SFX_Music";
	USoundClass* MusicSoundClass = FindObject<USoundClass>(nullptr, *MusicSoundClassName.ToString());

	if (MusicSoundClass)
	{
		MusicSoundClass->Properties.Volume = MusicVolume;
	}
}

float UPrimaryGameInstance::GetMusicVolume()
{
	return MusicVolume;
}
