#include "PlatformUserManager.h"

UPlatformUserManager::UPlatformUserManager() {
}

bool UPlatformUserManager::LoginStartPersistentAuth(APlayerController* _playerController) {
    return false;
}

bool UPlatformUserManager::LoginStartPassword(APlayerController* _playerController, const FString& _userName, const FString& _password) {
    return false;
}

bool UPlatformUserManager::LoginStartDeveloper(APlayerController* _playerController, const FString& _hostPort, const FString& _name) {
    return false;
}

bool UPlatformUserManager::LoginStartAccountPortal(APlayerController* _playerController) {
    return false;
}


