#include "MultiplayPlayerState.h"
#include "Net/UnrealNetwork.h"

AMultiplayPlayerState::AMultiplayPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LoginIndex = 0;
    this->LoginIndexLock = false;
    this->LoginFlag = false;
}

void AMultiplayPlayerState::Store_ReflectData() {
}

void AMultiplayPlayerState::SetPlayerData() {
}

void AMultiplayPlayerState::SetPilotName(const FString& _pilotName) {
}

void AMultiplayPlayerState::SetCustomizeSettingOnlineFromCustomizeSetting(const FCustomizeSetting& _setting) {
}

void AMultiplayPlayerState::SetCustomizeSettingOnline(const FCustomizeSettingOnline& _setting) {
}

void AMultiplayPlayerState::Server_SetPlayerData_Implementation() {
}

void AMultiplayPlayerState::OnRep_PilotName() {
}

void AMultiplayPlayerState::OnRep_LoginIndex() {
}

void AMultiplayPlayerState::OnRep_LoginFlag() {
}

void AMultiplayPlayerState::OnRep_CustomizeSettingOnline() {
}




FString AMultiplayPlayerState::GetPilotName() const {
    return TEXT("");
}

FCustomizeSettingOnline AMultiplayPlayerState::GetCustomizeSettingOnline() {
    return FCustomizeSettingOnline{};
}

void AMultiplayPlayerState::Client_SetPlayerData_Implementation() {
}

void AMultiplayPlayerState::Client_RenewIndex_StoreReflectData_Implementation(int32 _index) {
}

void AMultiplayPlayerState::Client_ReflectData_Implementation() {
}

void AMultiplayPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMultiplayPlayerState, CustomizeSettingOnline);
    DOREPLIFETIME(AMultiplayPlayerState, PilotName);
    DOREPLIFETIME(AMultiplayPlayerState, LoginIndex);
    DOREPLIFETIME(AMultiplayPlayerState, LoginIndexLock);
    DOREPLIFETIME(AMultiplayPlayerState, LoginFlag);
}


