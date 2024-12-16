#include "GameRecord.h"

UGameRecord::UGameRecord() {
    this->HiScoreStageFlag = false;
    this->HiScoreTotalFlag = false;
    this->TotalClearCount = 0;
    this->TotalClearCountNORMAL = 0;
    this->TotalClearCountBYDO = 0;
    this->TotalClearCountRTYPER = 0;
    this->TotalDestroyCount = 0;
    this->GamePlayCount = 0;
    this->TicketUseCount = 0;
}

void UGameRecord::SetTicketUseCount(int32 _count) {
}

void UGameRecord::SetMissionResult(int32 _missionIndex, EStageId _stageId, int32 _score) {
}

void UGameRecord::SetClearCountNoMiss(int32 _count) {
}

void UGameRecord::SetBuildFighter(EBODY_NO _bodyNo) {
}

void UGameRecord::ResetMissionResult() {
}

bool UGameRecord::IsHiScoreTotal() {
    return false;
}

bool UGameRecord::IsHiScoreStage() {
    return false;
}

bool UGameRecord::IsContact(int32 _bydoId) {
    return false;
}

bool UGameRecord::IsCameraBitShot(int32 _bydoId) {
    return false;
}

FTimespan UGameRecord::GetTotalPlayTime() {
    return FTimespan{};
}

int32 UGameRecord::GetTotalPlayStartCount(EGameMode _gameMode) {
    return 0;
}

int32 UGameRecord::GetTotalPlayCount(EGameMode _gameMode) {
    return 0;
}

int32 UGameRecord::GetTotalDestroyCount() {
    return 0;
}

int32 UGameRecord::GetTotalClearCountRTyper() {
    return 0;
}

int32 UGameRecord::GetTotalClearCountNormal() {
    return 0;
}

int32 UGameRecord::GetTotalClearCountDifficulty(EDifficulty _difficulty) {
    return 0;
}

int32 UGameRecord::GetTotalClearCountBydo() {
    return 0;
}

int32 UGameRecord::GetTotalClearCount() {
    return 0;
}

int32 UGameRecord::GetTicketUseCount() {
    return 0;
}

int32 UGameRecord::GetScoreStageDifficulty(EStageId _stageId, EDifficulty _difficulty, EGameMode _gameMode) {
    return 0;
}

int32 UGameRecord::GetScoreStage(EStageId _stageId, EGameMode _gameMode) {
    return 0;
}

int32 UGameRecord::GetPlayerWeaponUsedCountWaveCannon(EWAVECANNON_NO _id) {
    return 0;
}

int32 UGameRecord::GetPlayerWeaponUsedCountSpecialWeapon(ESPWEAPON_NO _id) {
    return 0;
}

int32 UGameRecord::GetPlayerWeaponUsedCountMissile(EMISSILE_NO _id) {
    return 0;
}

int32 UGameRecord::GetPlayerWeaponUsedCountForce(EFORCE_NO _id) {
    return 0;
}

int32 UGameRecord::GetPlayerWeaponUsedCountBodyAll() {
    return 0;
}

int32 UGameRecord::GetPlayerWeaponUsedCountBody(EBODY_NO _id) {
    return 0;
}

int32 UGameRecord::GetPlayerWeaponUsedCountBit(EBIT_NO _id) {
    return 0;
}

int32 UGameRecord::GetPlayerUseSpecialWeapon(EGameMode _gameMode) {
    return 0;
}

int32 UGameRecord::GetPlayerUsedBodyCount() {
    return 0;
}

int32 UGameRecord::GetPlayerOneShotKillCount(EGameMode _gameMode) {
    return 0;
}

FTimespan UGameRecord::GetPlayerForceReleaseTime(EGameMode _gameMode) {
    return FTimespan{};
}

int32 UGameRecord::GetPlayerFireShockWave(EGameMode _gameMode) {
    return 0;
}

int32 UGameRecord::GetPlayerEraseEnemyBullet(EGameMode _gameMode) {
    return 0;
}

FRecordBodyOS UGameRecord::GetPlayerBodyOS(EBODY_NO _id) {
    return FRecordBodyOS{};
}

float UGameRecord::GetMaxFinalMissionClearBonus(EGameMode _gameMode) {
    return 0.0f;
}

int32 UGameRecord::GetLaboFinishedSurveyCount() {
    return 0;
}

int32 UGameRecord::GetItemPickupCount(EItemType _itemType, EGameMode _gameMode) {
    return 0;
}

void UGameRecord::GetHiScoreTotalDetail(EDifficulty& _outDifficulty, int32& _outHiscore, FCustomizeSetting& _outCustomizeSetting, int32& _outHangarNo, EGameMode _gameMode) {
}

int32 UGameRecord::GetHiScoreTotal(EGameMode _gameMode) {
    return 0;
}

void UGameRecord::GetHiScoreMissionResult(EStageId& _outStageId, int32& _outScore, int32 _missionIndex, EGameMode _gameMode) {
}

EDifficulty UGameRecord::GetHiScoreDifficulty(EStageId _stageId, EGameMode _gameMode) {
    return EDifficulty::VERY_EASY;
}

int32 UGameRecord::GetGameScore(EGameMode _gameMode) {
    return 0;
}

int32 UGameRecord::GetGamePlayCount() {
    return 0;
}

int32 UGameRecord::GetFullPowerupCount(EGameMode _gameMode) {
    return 0;
}

int32 UGameRecord::GetDestroyEnemyCount(EBYDO_STANDARD _standard, EBYDO_CLASS1 _class1, EBYDO_CLASS2 _class2) {
    return 0;
}

int32 UGameRecord::GetDestroyCount(int32 _bydoId) {
    return 0;
}

int32 UGameRecord::GetCreditMax() {
    return 0;
}

void UGameRecord::GetContactStages(int32 _inBydoId, TArray<EStageId>& _outStages) {
}

int32 UGameRecord::GetCompetitionStageProgressMax(EStageId _stageId) {
    return 0;
}

int32 UGameRecord::GetClearStageCntRTyper3(EGameMode _gameMode) {
    return 0;
}

TArray<EStageId> UGameRecord::GetClearStage(EGameMode _gameMode) {
    return TArray<EStageId>();
}

FCustomizeSetting UGameRecord::GetClearSettingDifficulty(EStageId _stageId, EDifficulty _difficulty, EGameMode _gameMode) {
    return FCustomizeSetting{};
}

FCustomizeSetting UGameRecord::GetClearSetting(EStageId _stageId, EGameMode _gameMode) {
    return FCustomizeSetting{};
}

EDifficultyBits UGameRecord::GetClearDifficulty(EStageId _stageId, EGameMode _gameMode) {
    return EDifficultyBits::None;
}

int32 UGameRecord::GetClearCountNotUseSpecialWeapon(EStageId _stageId, EDifficulty _difficulty, EGameMode _gameMode) {
    return 0;
}

int32 UGameRecord::GetClearCountNotUseShockwave(EStageId _stageId, EDifficulty _difficulty, EGameMode _gameMode) {
    return 0;
}

int32 UGameRecord::GetClearCountNotUseRapidShot(EStageId _stageId, EDifficulty _difficulty, EGameMode _gameMode) {
    return 0;
}

int32 UGameRecord::GetClearCountNotPickupItem(EStageId _stageId, EDifficulty _difficulty, EGameMode _gameMode) {
    return 0;
}

int32 UGameRecord::GetClearCountNoMiss(EStageId _stageId, EDifficulty _difficulty, EGameMode _gameMode) {
    return 0;
}

int32 UGameRecord::GetClearCountMission(EGameMode _gameMode, int32 _missionIndex, EDifficulty _difficulty) {
    return 0;
}

int32 UGameRecord::GetClearCountFinalMissionNoMiss(EGameMode _gameMode, EDifficulty _difficulty) {
    return 0;
}

int32 UGameRecord::GetClearCountFinalMissionCategory(EGameMode _gameMode, EGameRecord_CountCategory _category, EDifficulty _difficulty) {
    return 0;
}

int32 UGameRecord::GetClearCountFinalMission(EGameMode _gameMode, EDifficulty _difficulty) {
    return 0;
}

int32 UGameRecord::GetClearCountDifficulty(EStageId _stageId, EDifficulty _difficulty, EGameMode _gameMode) {
    return 0;
}

int32 UGameRecord::GetClearCount(EStageId _stageId, EGameMode _gameMode) {
    return 0;
}

EBODY_NO UGameRecord::GetClearBody(EStageId _stageId, EGameMode _gameMode) {
    return EBODY_NO::BD_R9A;
}

FDateTime UGameRecord::GetBuildFighterDate(EBODY_NO _bodyNo) {
    return FDateTime{};
}

FTimespan UGameRecord::GetBossSceneTime(EStageId _stageId, EDifficulty _difficulty, EGameMode _gameMode) {
    return FTimespan{};
}

void UGameRecord::FoundAllBydoData() {
}


