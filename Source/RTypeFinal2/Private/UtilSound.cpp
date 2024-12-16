#include "UtilSound.h"

UUtilSound::UUtilSound() {
}

UAudioComponent* UUtilSound::SpawnSound2D(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool bIsUISound) {
    return NULL;
}

float UUtilSound::GetSoundDuration(USoundBase* _sound) {
    return 0.0f;
}

float UUtilSound::GetAudioComponentDuration(UAudioComponent* _component) {
    return 0.0f;
}

UAudioComponent* UUtilSound::CreateSound2D(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool bIsUISound) {
    return NULL;
}


