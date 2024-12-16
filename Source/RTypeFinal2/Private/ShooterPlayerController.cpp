#include "ShooterPlayerController.h"
#include "Camera/PlayerCameraManager.h"
#include "Net/UnrealNetwork.h"

AShooterPlayerController::AShooterPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = APlayerCameraManager::StaticClass();
    this->bAutoManageActiveCameraTarget = false;
    this->ClickEventKeys.AddDefaulted(1);
    this->ClassUiPause = NULL;
    this->UmgUiPause = NULL;
    this->bNodeathServer = false;
}

void AShooterPlayerController::SetPlayerPhase(EShooterPlayerPhase _playerPhase) {
}

void AShooterPlayerController::Server_SetSetup_Implementation(bool _bFlag) {
}

void AShooterPlayerController::Server_SetPlayerPhase_Implementation(EShooterPlayerPhase _playerPhase) {
}

void AShooterPlayerController::Server_RequestCheer_Implementation(int32 _loginIndex) {
}

void AShooterPlayerController::Server_AddDeadPlayerState_Implementation() {
}

void AShooterPlayerController::RequestCheer(int32 _loginIndex) {
}

UWidgetPause* AShooterPlayerController::GetWidgetPause() {
    return NULL;
}

EShooterPlayerPhase AShooterPlayerController::GetPlayerPhase() {
    return EShooterPlayerPhase::None;
}

void AShooterPlayerController::GameSlowOnPauseChanged(bool _isPaused) {
}

void AShooterPlayerController::EnableFactorInput(EDisableFactorFlag _factor) {
}

void AShooterPlayerController::DisableFactorInput(EDisableFactorFlag _factor) {
}

void AShooterPlayerController::Client_RequestCheer_Implementation(int32 _loginIndex) {
}

void AShooterPlayerController::AddDeadPlayerState() {
}

void AShooterPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShooterPlayerController, bNodeathServer);
}


