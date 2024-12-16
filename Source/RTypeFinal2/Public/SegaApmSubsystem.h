#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ESegaApm_ContinueType.h"
#include "ESegaApm_GamePhase.h"
#include "SegaApmSubsystem.generated.h"

class USegaApm_GamePhaseBase;

UCLASS(Blueprintable, Config=Game)
class USegaApmSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESegaApm_ContinueType ContinueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESegaApm_GamePhase, USegaApm_GamePhaseBase*> GamePhaseObjectTable;
    
public:
    USegaApmSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetSelectedContinue(bool _yes);
    
    UFUNCTION(BlueprintCallable)
    void SetPressedStartbutton(bool _on);
    
    UFUNCTION(BlueprintCallable)
    void SetPressedCountdown(bool _on);
    
    UFUNCTION(BlueprintCallable)
    void SetGamePhaseNext(ESegaApm_GamePhase _phase);
    
    UFUNCTION(BlueprintCallable)
    void SetContinueTimerMax(float _time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSelectedContinue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPressedStartbutton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPressedCountdown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESegaApm_ContinueType GetContinueType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetContinueTimerLeftInt();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetContinueTimerLeft();
    
};

