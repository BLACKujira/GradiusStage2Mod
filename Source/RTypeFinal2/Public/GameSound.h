#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameSound.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class UGameSound : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UGameSound();

    UFUNCTION(BlueprintCallable)
    void RestoreChange(FName _mixName, FName _className, float _fadeTime);
    
    UFUNCTION(BlueprintCallable)
    void PushMixModifier(FName _mixName);
    
    UFUNCTION(BlueprintCallable)
    void PopMixModifier(FName _mixName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeClassVolume(FName _mixName, FName _className, float _volume, float _fadeTime);
    
    UFUNCTION(BlueprintCallable)
    void ChangeClassPitch(FName _mixName, FName _className, float _pitch, float _fadeTime);
    
};

