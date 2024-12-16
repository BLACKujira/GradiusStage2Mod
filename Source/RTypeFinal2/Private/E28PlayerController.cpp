#include "E28PlayerController.h"
#include "E28PlayerCameraManager.h"

AE28PlayerController::AE28PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = AE28PlayerCameraManager::StaticClass();
    this->CheatClass = NULL;
    this->ClickEventKeys.AddDefaulted(1);
}

void AE28PlayerController::Server_PauseGame_Implementation(bool _flag, EPauseFlag _pauseFlag) {
}

void AE28PlayerController::Client_PauseGame_Implementation(bool _flag, EPauseFlag _pauseFlag) {
}

bool AE28PlayerController::BpPauseGame(bool _flag, EPauseFlag _pauseFlag) {
    return false;
}


