#include "E28GameInstance.h"

UE28GameInstance::UE28GameInstance() {
    this->ControllerPairingFlag = EControllerReconnectDisableCause::None;
    this->MessageDialog = NULL;
    this->ProfileUIPlayerController = NULL;
    this->StageMode = EStageMode::Load;
    this->StageId = EStageId::None;
    this->GateNo = 0;
    this->StartGateNo = 0;
    this->StageIdNext = EStageId::None;
    this->GateNoNext = 0;
    this->LifeCnt = 0;
    this->ReplayFlg = false;
    this->Score = 905996011;
    this->ScoreStageStart = 716487910;
    this->Credit = 0;
    this->CreditMax = 0;
    this->GameMode = EGameMode::NORMAL;
    this->IsPlayedStartDemo = false;
    this->StageLevelRoot = NULL;
    this->StageLoader = NULL;
    this->ShootingMode = false;
    this->UmgClearScr = NULL;
    this->GameTick = NULL;
    this->PlayerLoader = NULL;
    this->PlayerNum = 0;
    this->CompetitionSelectedIndex = 0;
    this->CompetitionSelectedStageId = EStageId::None;
}

void UE28GameInstance::StartGameSession(EStageId _stageId, int32 _gateNo, bool _createGame, bool _joinGame, const FString& _option) {
}

void UE28GameInstance::StartGame(EStageId _stageId, int32 _gateNo) {
}

void UE28GameInstance::StageInit(EStageId _stageId) {
}

void UE28GameInstance::StageFail() {
}

void UE28GameInstance::StageClear() {
}

AActor* UE28GameInstance::SpawnPlayerLoader() {
    return NULL;
}

AActor* UE28GameInstance::SpawnActor(UClass* _class) {
    return NULL;
}

void UE28GameInstance::ShowErrorDialog(const FText& _message) {
}

void UE28GameInstance::SetupGame(bool _forSave) {
}

void UE28GameInstance::SetStartGateNo(int32 _gateNo) {
}

void UE28GameInstance::SetStageMode(EStageMode _stageMode) {
}

void UE28GameInstance::SetStageLoader(AActor* _loader) {
}

void UE28GameInstance::SetStageLevelRoot(ULevelStreaming* _level) {
}

void UE28GameInstance::SetStageIdNext(EStageId _stageId) {
}

void UE28GameInstance::SetStageId(EStageId _stageId) {
}

void UE28GameInstance::SetShootingMode(bool _shootingMode) {
}

void UE28GameInstance::SetScoreStageStart(int32 _score) {
}

void UE28GameInstance::SetScore(int32 _score) {
}

void UE28GameInstance::SetReplayFlg(bool _replayFlg) {
}

void UE28GameInstance::SetPlayerNum(int32 _num) {
}

void UE28GameInstance::SetPlayerLoader(AActor* _actor) {
}

void UE28GameInstance::SetPlayedStartDemo(bool _flag) {
}

void UE28GameInstance::SetOnlineMode(EOnlineMode InOnlineMode) {
}

void UE28GameInstance::SetLifeCnt(int32 _lifeCnt) {
}

void UE28GameInstance::SetIgnorePairingChangeForControllerId(const int32 ControllerId) {
}

void UE28GameInstance::SetGateNoNext(int32 _gateNo) {
}

void UE28GameInstance::SetGateNo(int32 _gateNo) {
}

void UE28GameInstance::SetGameTick(AActor* _gameTick) {
}

void UE28GameInstance::SetGameMode(EGameMode _gameMode) {
}

void UE28GameInstance::SetErrorFlags(EErrorFlags _flags) {
}

void UE28GameInstance::SetDisableNetworkErrorDisconnect(bool _disable) {
}

void UE28GameInstance::SetCreditMax(int32 _val) {
}

void UE28GameInstance::SetCredit(int32 _val) {
}

void UE28GameInstance::SetControllerReconnectDisableFlag(EControllerReconnectDisableCause _flag) {
}

void UE28GameInstance::SetChangeAccount(bool _flag) {
}

void UE28GameInstance::ReturnToTitle_OnPostLoadMap(UWorld* _world) {
}

void UE28GameInstance::ReturnToTitle(int32 _gateNo) {
}

void UE28GameInstance::RestartGame() {
}

void UE28GameInstance::ResetNetworkErrorMessage() {
}

void UE28GameInstance::ResetGameState() {
}

void UE28GameInstance::PushFixedFrameRate() {
}

bool UE28GameInstance::ProfileUISwap(APlayerController* _playerController) {
    return false;
}

void UE28GameInstance::PrintLogBlueprintCallstack() {
}

void UE28GameInstance::PopFixedFrameRate() {
}

void UE28GameInstance::PerformGarbageCollectionAndCleanupActors() {
}

bool UE28GameInstance::IsCreditMaxInfinity() {
    return false;
}

bool UE28GameInstance::IsCreditInfinity() {
    return false;
}

bool UE28GameInstance::IsControllerReconnectDisableByMaskAny(EControllerReconnectDisableCause _mask) const {
    return false;
}

bool UE28GameInstance::IsControllerReconnectDisable() const {
    return false;
}

bool UE28GameInstance::IsActivateErrorDialog() const {
    return false;
}

void UE28GameInstance::InitGame(EGameMode _gameMode) {
}

bool UE28GameInstance::HasAnyErrorFlags(EErrorFlags _flags) {
    return false;
}

bool UE28GameInstance::HasAllErrorFlags(EErrorFlags _flags) {
    return false;
}

void UE28GameInstance::HandleSignInChangeMessaging() {
}

void UE28GameInstance::GotoLevelNetworkErrorOther(const FText& Message, int32 _gateNo) {
}

int32 UE28GameInstance::GetStartGateNo() {
    return 0;
}

EStageMode UE28GameInstance::GetStageMode() {
    return EStageMode::Load;
}

AActor* UE28GameInstance::GetStageLoader() {
    return NULL;
}

UDataTable* UE28GameInstance::GetStageListComp() {
    return NULL;
}

UDataTable* UE28GameInstance::GetStageList() {
    return NULL;
}

ULevelStreaming* UE28GameInstance::GetStageLevelRoot() {
    return NULL;
}

EStageId UE28GameInstance::GetStageIdNext() {
    return EStageId::None;
}

EStageId UE28GameInstance::GetStageId() {
    return EStageId::None;
}

bool UE28GameInstance::GetShootingMode() {
    return false;
}

int32 UE28GameInstance::GetScoreStageStart() {
    return 0;
}

int32 UE28GameInstance::GetScoreStage() {
    return 0;
}

int32 UE28GameInstance::GetScore() {
    return 0;
}

bool UE28GameInstance::GetReplayFlg() {
    return false;
}

int32 UE28GameInstance::GetPlayerNum() const {
    return 0;
}

AActor* UE28GameInstance::GetPlayerLoader() const {
    return NULL;
}

bool UE28GameInstance::GetPlayedStartDemo() {
    return false;
}

EOnlineMode UE28GameInstance::GetOnlineMode() const {
    return EOnlineMode::Offline;
}

bool UE28GameInstance::GetNetworkErrorMessage(FText& Message) const {
    return false;
}

int32 UE28GameInstance::GetLifeCntMax() {
    return 0;
}

int32 UE28GameInstance::GetLifeCnt() {
    return 0;
}

int32 UE28GameInstance::GetGateNoNext() {
    return 0;
}

int32 UE28GameInstance::GetGateNo() {
    return 0;
}

AActor* UE28GameInstance::GetGameTick() const {
    return NULL;
}

UGameStateMachine* UE28GameInstance::GetGameStateMachine() const {
    return NULL;
}

EGameMode UE28GameInstance::GetGameMode() {
    return EGameMode::NORMAL;
}

EErrorFlags UE28GameInstance::GetErrorFlags() {
    return EErrorFlags::None;
}

int32 UE28GameInstance::GetCreditMax() {
    return 0;
}

int32 UE28GameInstance::GetCredit() {
    return 0;
}

bool UE28GameInstance::GetChangeAccount() const {
    return false;
}

void UE28GameInstance::GameStateSetGameClearLoadStart() {
}

void UE28GameInstance::GameStateSetGameClearEventEnd() {
}

void UE28GameInstance::GameStateSetGameClearCaptureFlag() {
}

bool UE28GameInstance::GameStateIsGameClearEventEnd() const {
    return false;
}

void UE28GameInstance::GameStateChangeIfDifferent(FName _state) {
}

void UE28GameInstance::GameStateChangeGameRestart() {
}

void UE28GameInstance::GameStateChangeGameOver() {
}

void UE28GameInstance::GameStateChange(FName _state) {
}

void UE28GameInstance::GameoverGame() {
}

void UE28GameInstance::GameClear() {
}

void UE28GameInstance::ForceGarbageCollection(bool _FullPurge) {
}

void UE28GameInstance::FinishLoadingScreen() {
}

void UE28GameInstance::EndGame() {
}

void UE28GameInstance::DebugTriggerTravelFailure(TEnumAsByte<ETravelFailure::Type> FailureType) {
}

void UE28GameInstance::DebugTriggerNetworkFailure(TEnumAsByte<ENetworkFailure::Type> FailureType, bool bIsServer) {
}

void UE28GameInstance::DebugGetOnlineCustomizeSettings(TArray<FCustomizeSettingOnline>& _array) {
}

void UE28GameInstance::ContinueGame() {
}

void UE28GameInstance::ClearScrFadeOut() {
}

void UE28GameInstance::ClearControllerReconnectDisableFlag(EControllerReconnectDisableCause _flag) {
}

UE28GameViewportClient* UE28GameInstance::BpGetGameViewportClient() const {
    return NULL;
}

void UE28GameInstance::BootInit() {
}

void UE28GameInstance::BeginLoadingScreen() {
}


