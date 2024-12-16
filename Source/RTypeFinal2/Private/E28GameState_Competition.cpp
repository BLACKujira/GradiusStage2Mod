#include "E28GameState_Competition.h"
#include "Net/UnrealNetwork.h"

AE28GameState_Competition::AE28GameState_Competition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GamePhase = ECompetitionGamePhase::None;
    this->DeadPlayerStateArrayCalledNum = 0;
}

void AE28GameState_Competition::Server_SetGamePlayInfo_PilotName_Implementation(APlayerState* _playerState, const FString& _pilotName) {
}

void AE28GameState_Competition::Server_SetGamePlayInfo_OnlineSetting_Implementation(APlayerState* _playerState, const FCustomizeSettingOnline& _setting) {
}

void AE28GameState_Competition::Server_SetGamePlayInfo_LoginIndex_Implementation(APlayerState* _playerState, const int32 _loginIndex) {
}

void AE28GameState_Competition::Server_SetGamePlayInfo_LoginFlag_Implementation(APlayerState* _playerState, const bool _loginFlag) {
}

void AE28GameState_Competition::OnRep_GameStartTime() {
}

void AE28GameState_Competition::OnRep_GamePlayerInfoArray() {
}

void AE28GameState_Competition::OnRep_GamePhase() {
}

void AE28GameState_Competition::OnRep_DeadPlayerState() {
}

int32 AE28GameState_Competition::GetTrueDeadPlayerStateArray(TArray<APlayerState*>& _array) const {
    return 0;
}

void AE28GameState_Competition::GameStartTimerEnd() {
}

void AE28GameState_Competition::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AE28GameState_Competition, GamePhase);
    DOREPLIFETIME(AE28GameState_Competition, GameStartTime);
    DOREPLIFETIME(AE28GameState_Competition, DeadPlayerStateArray);
    DOREPLIFETIME(AE28GameState_Competition, GamePlayerInfoArray);
    DOREPLIFETIME(AE28GameState_Competition, GamePlayerStateArray);
}


