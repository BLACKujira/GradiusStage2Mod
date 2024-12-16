#include "E28GameMode.h"
#include "E28PlayerController.h"

AE28GameMode::AE28GameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = AE28PlayerController::StaticClass();
    this->AudioBgm = NULL;
    this->bEnableSetLoginCount = false;
    this->MaxLoginPlayers = 0;
}

void AE28GameMode::SetMaxLoginPlayers(int32 _num) {
}

void AE28GameMode::SetEnableSetLoginCount(bool _bEnable) {
}

void AE28GameMode::SetAudioBgm(UAudioComponent* _audioBgm) {
}

int32 AE28GameMode::GetMaxLoginPlayers() const {
    return 0;
}

bool AE28GameMode::GetEnableSetLoginCount() const {
    return false;
}

UAudioComponent* AE28GameMode::GetAudioBgm() {
    return NULL;
}

void AE28GameMode::BpStopBgm() {
}

void AE28GameMode::BpSetClosedEntry(bool _flag) {
}

void AE28GameMode::BpRenewLoginIndexAllPlayers() {
}

void AE28GameMode::BpRenewLoginIndex() {
}

void AE28GameMode::BpRenewIndexStoreReflectDataAllPlayers() {
}

void AE28GameMode::BpPlayBgm(USoundCue* _cue) {
}

void AE28GameMode::BpPauseBgm(bool _pause) {
}

int32 AE28GameMode::BpGetNumLeftPlayers(int32 _deadNum) {
    return 0;
}

bool AE28GameMode::BpGetClosedEntry() {
    return false;
}

void AE28GameMode::BpFadeOutBgm(float _fadeTime) {
}

void AE28GameMode::BpFadeOutAndPlayBgm(float _fadeTime, USoundCue* _cue) {
}

void AE28GameMode::BpFadeInBgm(float _fadeTime) {
}

void AE28GameMode::BpAdjustVolumeBgm(float _fadeTime, float _level) {
}


