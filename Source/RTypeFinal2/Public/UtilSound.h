#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilSound.generated.h"

class UAudioComponent;
class UObject;
class USoundBase;
class USoundConcurrency;

UCLASS(Blueprintable)
class UUtilSound : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilSound();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UAudioComponent* SpawnSound2D(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool bIsUISound);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSoundDuration(USoundBase* _sound);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAudioComponentDuration(UAudioComponent* _component);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UAudioComponent* CreateSound2D(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool bIsUISound);
    
};

