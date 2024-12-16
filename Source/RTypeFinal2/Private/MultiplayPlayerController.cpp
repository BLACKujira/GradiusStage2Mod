#include "MultiplayPlayerController.h"

AMultiplayPlayerController::AMultiplayPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}

void AMultiplayPlayerController::SetPlayerData() {
}

void AMultiplayPlayerController::Server_SetPlayerData_Implementation() {
}

void AMultiplayPlayerController::Server_SetPilotName_Implementation(const FString& _pilotName) {
}

void AMultiplayPlayerController::Server_SetLoginIndexLock_Implementation(bool _flag) {
}

void AMultiplayPlayerController::Server_SetLoginIndex_Implementation(int32 _index) {
}
bool AMultiplayPlayerController::Server_SetLoginIndex_Validate(int32 _index) {
    return true;
}

void AMultiplayPlayerController::Server_SetCustomizeSettingOnline_Implementation(const FCustomizeSettingOnline& _setting) {
}

void AMultiplayPlayerController::Server_LeavePlayerAll_Report_Implementation() {
}

void AMultiplayPlayerController::Server_AllocLoginIndex_Implementation() {
}

void AMultiplayPlayerController::ReflectData() {
}

void AMultiplayPlayerController::Client_SetPlayerData_Implementation() {
}

void AMultiplayPlayerController::Client_SetDisableNetworkErrorDisconnect_Implementation(bool _disable) {
}

void AMultiplayPlayerController::Client_LeavePlayerAll_Implementation() {
}

void AMultiplayPlayerController::CleanupSession() {
}


