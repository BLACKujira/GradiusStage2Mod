#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "E28GameMode.generated.h"

class UAudioComponent;
class USoundCue;

UCLASS(Blueprintable, NonTransient)
class AE28GameMode : public AGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioBgm;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSetLoginCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLoginPlayers;
    
public:
    AE28GameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMaxLoginPlayers(int32 _num);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSetLoginCount(bool _bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioBgm(UAudioComponent* _audioBgm);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLoginPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableSetLoginCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAudioComponent* GetAudioBgm();
    
    UFUNCTION(BlueprintCallable)
    void BpStopBgm();
    
    UFUNCTION(BlueprintCallable)
    void BpSetClosedEntry(bool _flag);
    
    UFUNCTION(BlueprintCallable)
    void BpRenewLoginIndexAllPlayers();
    
    UFUNCTION(BlueprintCallable)
    void BpRenewLoginIndex();
    
    UFUNCTION(BlueprintCallable)
    void BpRenewIndexStoreReflectDataAllPlayers();
    
    UFUNCTION(BlueprintCallable)
    void BpPlayBgm(USoundCue* _cue);
    
    UFUNCTION(BlueprintCallable)
    void BpPauseBgm(bool _pause);
    
    UFUNCTION(BlueprintCallable)
    int32 BpGetNumLeftPlayers(int32 _deadNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BpGetClosedEntry();
    
    UFUNCTION(BlueprintCallable)
    void BpFadeOutBgm(float _fadeTime);
    
    UFUNCTION(BlueprintCallable)
    void BpFadeOutAndPlayBgm(float _fadeTime, USoundCue* _cue);
    
    UFUNCTION(BlueprintCallable)
    void BpFadeInBgm(float _fadeTime);
    
    UFUNCTION(BlueprintCallable)
    void BpAdjustVolumeBgm(float _fadeTime, float _level);
    
};

