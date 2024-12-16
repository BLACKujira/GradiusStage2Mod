#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "Engine/GameInstance.h"
#include "SafeInt.h"
#include "CustomizeSettingOnline.h"
#include "E28GameInstanceInterface.h"
#include "EControllerReconnectDisableCause.h"
#include "EErrorFlags.h"
#include "EGameMode.h"
#include "EOnlineMode.h"
#include "EStageId.h"
#include "EStageMode.h"
#include "ProtectDataInt32.h"
#include "E28GameInstance.generated.h"

class AActor;
class APlayerController;
class UDataTable;
class UE28GameViewportClient;
class UGameStateMachine;
class ULevelStreaming;
class UObject;
class UWidgetClearScr;
class UWidgetMessageDialogBase;
class UWorld;

UCLASS(Blueprintable, NonTransient)
class RTYPEFINAL2_API UE28GameInstance : public UGameInstance, public IE28GameInstanceInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnProfileUIFinished, bool, _isSuccess, APlayerController*, _playerController);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> GameStateObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerReconnectDisableCause ControllerPairingFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetMessageDialogBase* MessageDialog;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProfileUIFinished OnProfileUIFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* ProfileUIPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageMode StageMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId StageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GateNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartGateNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId StageIdNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GateNoNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LifeCnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReplayFlg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProtectDataInt32 PScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProtectDataInt32 PScoreStageStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreStageStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Credit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreditMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StageListComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameMode GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayedStartDemo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreaming* StageLevelRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* StageLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShootingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSafeInt ErrorFlags;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetClearScr* UmgClearScr;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* GameTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* PlayerLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerNum;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompetitionSelectedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId CompetitionSelectedStageId;
    
    UE28GameInstance();

    UFUNCTION(BlueprintCallable)
    void StartGameSession(EStageId _stageId, int32 _gateNo, bool _createGame, bool _joinGame, const FString& _option);
    
    UFUNCTION(BlueprintCallable)
    void StartGame(EStageId _stageId, int32 _gateNo);
    
    UFUNCTION(BlueprintCallable)
    void StageInit(EStageId _stageId);
    
    UFUNCTION(BlueprintCallable)
    void StageFail();
    
    UFUNCTION(BlueprintCallable)
    void StageClear();
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnPlayerLoader();
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnActor(UClass* _class);
    
    UFUNCTION(BlueprintCallable)
    void ShowErrorDialog(const FText& _message);
    
    UFUNCTION(BlueprintCallable)
    void SetupGame(bool _forSave);
    
    UFUNCTION(BlueprintCallable)
    void SetStartGateNo(int32 _gateNo);
    
    UFUNCTION(BlueprintCallable)
    void SetStageMode(EStageMode _stageMode);
    
    UFUNCTION(BlueprintCallable)
    void SetStageLoader(AActor* _loader);
    
    UFUNCTION(BlueprintCallable)
    void SetStageLevelRoot(ULevelStreaming* _level);
    
    UFUNCTION(BlueprintCallable)
    void SetStageIdNext(EStageId _stageId);
    
    UFUNCTION(BlueprintCallable)
    void SetStageId(EStageId _stageId);
    
    UFUNCTION(BlueprintCallable)
    void SetShootingMode(bool _shootingMode);
    
    UFUNCTION(BlueprintCallable)
    void SetScoreStageStart(int32 _score);
    
    UFUNCTION(BlueprintCallable)
    void SetScore(int32 _score);
    
    UFUNCTION(BlueprintCallable)
    void SetReplayFlg(bool _replayFlg);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerNum(int32 _num);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerLoader(AActor* _actor);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayedStartDemo(bool _flag);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineMode(EOnlineMode InOnlineMode);
    
    UFUNCTION(BlueprintCallable)
    void SetLifeCnt(int32 _lifeCnt);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnorePairingChangeForControllerId(const int32 ControllerId);
    
    UFUNCTION(BlueprintCallable)
    void SetGateNoNext(int32 _gateNo);
    
    UFUNCTION(BlueprintCallable)
    void SetGateNo(int32 _gateNo);
    
    UFUNCTION(BlueprintCallable)
    void SetGameTick(AActor* _gameTick);
    
    UFUNCTION(BlueprintCallable)
    void SetGameMode(EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable)
    void SetErrorFlags(EErrorFlags _flags);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableNetworkErrorDisconnect(bool _disable);
    
    UFUNCTION(BlueprintCallable)
    void SetCreditMax(int32 _val);
    
    UFUNCTION(BlueprintCallable)
    void SetCredit(int32 _val);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerReconnectDisableFlag(EControllerReconnectDisableCause _flag);
    
    UFUNCTION(BlueprintCallable)
    void SetChangeAccount(bool _flag);
    
private:
    UFUNCTION(BlueprintCallable)
    void ReturnToTitle_OnPostLoadMap(UWorld* _world);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReturnToTitle(int32 _gateNo);
    
    UFUNCTION(BlueprintCallable)
    void RestartGame();
    
    UFUNCTION(BlueprintCallable)
    void ResetNetworkErrorMessage();
    
    UFUNCTION(BlueprintCallable)
    void ResetGameState();
    
    UFUNCTION(BlueprintCallable)
    void PushFixedFrameRate();
    
    UFUNCTION(BlueprintCallable)
    bool ProfileUISwap(APlayerController* _playerController);
    
    UFUNCTION(BlueprintCallable)
    static void PrintLogBlueprintCallstack();
    
    UFUNCTION(BlueprintCallable)
    void PopFixedFrameRate();
    
    UFUNCTION(BlueprintCallable)
    void PerformGarbageCollectionAndCleanupActors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreditMaxInfinity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreditInfinity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControllerReconnectDisableByMaskAny(EControllerReconnectDisableCause _mask) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControllerReconnectDisable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivateErrorDialog() const;
    
    UFUNCTION(BlueprintCallable)
    void InitGame(EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyErrorFlags(EErrorFlags _flags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllErrorFlags(EErrorFlags _flags);
    
    UFUNCTION(BlueprintCallable)
    void HandleSignInChangeMessaging();
    
    UFUNCTION(BlueprintCallable)
    void GotoLevelNetworkErrorOther(const FText& Message, int32 _gateNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStartGateNo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStageMode GetStageMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetStageLoader();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetStageListComp();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetStageList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelStreaming* GetStageLevelRoot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStageId GetStageIdNext();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStageId GetStageId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShootingMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScoreStageStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScoreStage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReplayFlg();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetPlayerLoader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayedStartDemo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOnlineMode GetOnlineMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNetworkErrorMessage(FText& Message) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetLifeCntMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLifeCnt();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGateNoNext();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGateNo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetGameTick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameStateMachine* GetGameStateMachine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameMode GetGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EErrorFlags GetErrorFlags();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCreditMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCredit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetChangeAccount() const;
    
    UFUNCTION(BlueprintCallable)
    void GameStateSetGameClearLoadStart();
    
    UFUNCTION(BlueprintCallable)
    void GameStateSetGameClearEventEnd();
    
    UFUNCTION(BlueprintCallable)
    void GameStateSetGameClearCaptureFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GameStateIsGameClearEventEnd() const;
    
    UFUNCTION(BlueprintCallable)
    void GameStateChangeIfDifferent(FName _state);
    
    UFUNCTION(BlueprintCallable)
    void GameStateChangeGameRestart();
    
    UFUNCTION(BlueprintCallable)
    void GameStateChangeGameOver();
    
    UFUNCTION(BlueprintCallable)
    void GameStateChange(FName _state);
    
    UFUNCTION(BlueprintCallable)
    void GameoverGame();
    
    UFUNCTION(BlueprintCallable)
    void GameClear();
    
    UFUNCTION(BlueprintCallable)
    void ForceGarbageCollection(bool _FullPurge);
    
    UFUNCTION(BlueprintCallable)
    void FinishLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    void EndGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugTriggerTravelFailure(TEnumAsByte<ETravelFailure::Type> FailureType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugTriggerNetworkFailure(TEnumAsByte<ENetworkFailure::Type> FailureType, bool bIsServer);
    
    UFUNCTION(BlueprintCallable)
    void DebugGetOnlineCustomizeSettings(TArray<FCustomizeSettingOnline>& _array);
    
    UFUNCTION(BlueprintCallable)
    void ContinueGame();
    
    UFUNCTION(BlueprintCallable)
    void ClearScrFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void ClearControllerReconnectDisableFlag(EControllerReconnectDisableCause _flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UE28GameViewportClient* BpGetGameViewportClient() const;
    
    UFUNCTION(BlueprintCallable)
    void BootInit();
    
    UFUNCTION(BlueprintCallable)
    void BeginLoadingScreen();
    

    // Fix for true pure virtual functions not being implemented
};

