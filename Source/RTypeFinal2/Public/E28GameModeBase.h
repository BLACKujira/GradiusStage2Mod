#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "E28GameModeBase.generated.h"

class UAudioComponent;
class USoundCue;

UCLASS(Blueprintable, NonTransient)
class AE28GameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioBgm;
    
public:
    AE28GameModeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAudioBgm(UAudioComponent* _audioBgm);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAudioComponent* GetAudioBgm();
    
    UFUNCTION(BlueprintCallable)
    void BpStopBgm();
    
    UFUNCTION(BlueprintCallable)
    void BpPlayBgm(USoundCue* _cue);
    
    UFUNCTION(BlueprintCallable)
    void BpPauseBgm(bool _pause);
    
    UFUNCTION(BlueprintCallable)
    void BpFadeOutBgm(float _fadeTime);
    
    UFUNCTION(BlueprintCallable)
    void BpFadeOutAndPlayBgm(float _fadeTime, USoundCue* _cue);
    
    UFUNCTION(BlueprintCallable)
    void BpFadeInBgm(float _fadeTime);
    
    UFUNCTION(BlueprintCallable)
    void BpAdjustVolumeBgm(float _fadeTime, float _level);
    
};

