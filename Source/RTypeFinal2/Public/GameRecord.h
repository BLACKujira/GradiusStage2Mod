#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CustomizeSetting.h"
#include "EBIT_NO.h"
#include "EBODY_NO.h"
#include "EBYDO_CLASS1.h"
#include "EBYDO_CLASS2.h"
#include "EBYDO_STANDARD.h"
#include "EDifficulty.h"
#include "EDifficultyBits.h"
#include "EFORCE_NO.h"
#include "EGameMode.h"
#include "EGameRecord_CountCategory.h"
#include "EItemType.h"
#include "EMISSILE_NO.h"
#include "ESPWEAPON_NO.h"
#include "EStageId.h"
#include "EWAVECANNON_NO.h"
#include "RecordBodyOS.h"
#include "RecordCompetition.h"
#include "RecordFighters.h"
#include "RecordGame.h"
#include "RecordLabo.h"
#include "RecordPlayer.h"
#include "RecordStage.h"
#include "RecordTotalMissionResult.h"
#include "GameRecord.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class UGameRecord : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecordStage RecordStagesMix[252];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecordStage RecordStagesNormal[252];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecordStage RecordStagesScore[252];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecordGame RecordGameMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecordGame RecordGameNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecordGame RecordGameScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecordGame RecordGameDLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecordCompetition RecordCompetition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HiScoreStageFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HiScoreTotalFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecordLabo LaboData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalClearCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalClearCountNORMAL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalClearCountBYDO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalClearCountRTYPER;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalDestroyCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GamePlayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecordPlayer RecordPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecordTotalMissionResult TotalMissionResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecordFighters RecordFighters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TicketUseCount;
    
public:
    UGameRecord();

    UFUNCTION(BlueprintCallable)
    void SetTicketUseCount(int32 _count);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionResult(int32 _missionIndex, EStageId _stageId, int32 _score);
    
    UFUNCTION(BlueprintCallable)
    void SetClearCountNoMiss(int32 _count);
    
    UFUNCTION(BlueprintCallable)
    void SetBuildFighter(EBODY_NO _bodyNo);
    
    UFUNCTION(BlueprintCallable)
    void ResetMissionResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHiScoreTotal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHiScoreStage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsContact(int32 _bydoId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraBitShot(int32 _bydoId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetTotalPlayTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalPlayStartCount(EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalPlayCount(EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalDestroyCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalClearCountRTyper();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalClearCountNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalClearCountDifficulty(EDifficulty _difficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalClearCountBydo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalClearCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTicketUseCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScoreStageDifficulty(EStageId _stageId, EDifficulty _difficulty, EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScoreStage(EStageId _stageId, EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerWeaponUsedCountWaveCannon(EWAVECANNON_NO _id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerWeaponUsedCountSpecialWeapon(ESPWEAPON_NO _id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerWeaponUsedCountMissile(EMISSILE_NO _id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerWeaponUsedCountForce(EFORCE_NO _id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerWeaponUsedCountBodyAll();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerWeaponUsedCountBody(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerWeaponUsedCountBit(EBIT_NO _id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerUseSpecialWeapon(EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerUsedBodyCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerOneShotKillCount(EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetPlayerForceReleaseTime(EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerFireShockWave(EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerEraseEnemyBullet(EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRecordBodyOS GetPlayerBodyOS(EBODY_NO _id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxFinalMissionClearBonus(EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLaboFinishedSurveyCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemPickupCount(EItemType _itemType, EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHiScoreTotalDetail(EDifficulty& _outDifficulty, int32& _outHiscore, FCustomizeSetting& _outCustomizeSetting, int32& _outHangarNo, EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHiScoreTotal(EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHiScoreMissionResult(EStageId& _outStageId, int32& _outScore, int32 _missionIndex, EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDifficulty GetHiScoreDifficulty(EStageId _stageId, EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGameScore(EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGamePlayCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFullPowerupCount(EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDestroyEnemyCount(EBYDO_STANDARD _standard, EBYDO_CLASS1 _class1, EBYDO_CLASS2 _class2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDestroyCount(int32 _bydoId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCreditMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetContactStages(int32 _inBydoId, TArray<EStageId>& _outStages);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCompetitionStageProgressMax(EStageId _stageId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClearStageCntRTyper3(EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EStageId> GetClearStage(EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCustomizeSetting GetClearSettingDifficulty(EStageId _stageId, EDifficulty _difficulty, EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCustomizeSetting GetClearSetting(EStageId _stageId, EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDifficultyBits GetClearDifficulty(EStageId _stageId, EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClearCountNotUseSpecialWeapon(EStageId _stageId, EDifficulty _difficulty, EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClearCountNotUseShockwave(EStageId _stageId, EDifficulty _difficulty, EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClearCountNotUseRapidShot(EStageId _stageId, EDifficulty _difficulty, EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClearCountNotPickupItem(EStageId _stageId, EDifficulty _difficulty, EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClearCountNoMiss(EStageId _stageId, EDifficulty _difficulty, EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClearCountMission(EGameMode _gameMode, int32 _missionIndex, EDifficulty _difficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClearCountFinalMissionNoMiss(EGameMode _gameMode, EDifficulty _difficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClearCountFinalMissionCategory(EGameMode _gameMode, EGameRecord_CountCategory _category, EDifficulty _difficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClearCountFinalMission(EGameMode _gameMode, EDifficulty _difficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClearCountDifficulty(EStageId _stageId, EDifficulty _difficulty, EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClearCount(EStageId _stageId, EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBODY_NO GetClearBody(EStageId _stageId, EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetBuildFighterDate(EBODY_NO _bodyNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetBossSceneTime(EStageId _stageId, EDifficulty _difficulty, EGameMode _gameMode);
    
    UFUNCTION(BlueprintCallable)
    void FoundAllBydoData();
    
};

