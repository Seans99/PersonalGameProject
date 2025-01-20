#include "SoundManager.h"
#include "Sound/SoundMix.h"
#include "Sound/SoundClass.h"

void USoundManager::SetMasterVolume(float Volume)
{
	MasterVolume = FMath::Clamp(Volume, 0.0f, 1.0f);

	static const FName MasterSoundClassName = "SFX_Master";
	USoundClass* MasterSoundClass = FindObject<USoundClass>(nullptr, *MasterSoundClassName.ToString());

	if (MasterSoundClass)
	{
		MasterSoundClass->Properties.Volume = MasterVolume;
	}
}

float USoundManager::GetMasterVolume()
{
	return MasterVolume;
}

void USoundManager::SetMusicVolume(float Volume)
{
	MusicVolume = FMath::Clamp(Volume, 0.0f, 1.0f);

	static const FName MusicSoundClassName = "SFX_Music";
	USoundClass* MusicSoundClass = FindObject<USoundClass>(nullptr, *MusicSoundClassName.ToString());

	if (MusicSoundClass)
	{
		MusicSoundClass->Properties.Volume = MusicVolume;
	}
}

float USoundManager::GetMusicVolume()
{
	return MusicVolume;
}
