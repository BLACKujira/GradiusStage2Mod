#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "StageBgm.generated.h"

class UAudioComponent;
class USoundCue;

UCLASS(Blueprintable)
class AStageBgm : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* CueBgm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioBgm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandleBgm;
    
public:
    AStageBgm(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BpStopBgm();
    
    UFUNCTION(BlueprintCallable)
    void BpSetAudioBgm(UAudioComponent* _audioBgm);
    
    UFUNCTION(BlueprintCallable)
    void BpPlayBgm(USoundCue* _cue);
    
    UFUNCTION(BlueprintCallable)
    void BpPauseBgm(bool _pause);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAudioComponent* BpGetAudioBgm();
    
    UFUNCTION(BlueprintCallable)
    void BpFadeOutBgm(float _fadeTime);
    
    UFUNCTION(BlueprintCallable)
    void BpFadeOutAndPlayBgm(float _fadeTime, USoundCue* _cue);
    
    UFUNCTION(BlueprintCallable)
    void BpFadeInBgm(float _fadeTime);
    
    UFUNCTION(BlueprintCallable)
    void BpAdjustVolumeBgm(float _fadeTime, float _level);
    
};

