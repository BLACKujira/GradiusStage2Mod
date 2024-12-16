#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomizeSettingOnline.h"
#include "E28GameStateBase.h"
#include "ECompetitionGamePhase.h"
#include "GamePlayerInfo.h"
#include "E28GameState_Competition.generated.h"

class APlayerState;

UCLASS(Blueprintable)
class AE28GameState_Competition : public AE28GameStateBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGamePhaseDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDeadPlayerDelegate, APlayerState*, _playerState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeadPlayerDelegate OnAddedDeadPlayerArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GamePhase, meta=(AllowPrivateAccess=true))
    ECompetitionGamePhase GamePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GameStartTime, meta=(AllowPrivateAccess=true))
    FTimespan GameStartTime;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGamePhaseDelegate OnGamePhaseInit_StartCount;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGamePhaseDelegate OnGamePhaseInit_Start;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGamePhaseDelegate OnGamePhaseInit_GameOver;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGamePhaseDelegate OnGamePhaseInit_GameClear;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DeadPlayerState, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> DeadPlayerStateArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DeadPlayerStateArrayCalledNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GamePlayerInfoArray, meta=(AllowPrivateAccess=true))
    TArray<FGamePlayerInfo> GamePlayerInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> GamePlayerStateArray;
    
public:
    AE28GameState_Competition(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetGamePlayInfo_PilotName(APlayerState* _playerState, const FString& _pilotName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetGamePlayInfo_OnlineSetting(APlayerState* _playerState, const FCustomizeSettingOnline& _setting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetGamePlayInfo_LoginIndex(APlayerState* _playerState, const int32 _loginIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetGamePlayInfo_LoginFlag(APlayerState* _playerState, const bool _loginFlag);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameStartTime();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_GamePlayerInfoArray();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_GamePhase();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DeadPlayerState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTrueDeadPlayerStateArray(TArray<APlayerState*>& _array) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GameStartTimerEnd();
    
};

