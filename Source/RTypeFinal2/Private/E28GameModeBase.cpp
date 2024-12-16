#include "E28GameModeBase.h"
#include "E28PlayerController.h"

AE28GameModeBase::AE28GameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = AE28PlayerController::StaticClass();
    this->AudioBgm = NULL;
}

void AE28GameModeBase::SetAudioBgm(UAudioComponent* _audioBgm) {
}

UAudioComponent* AE28GameModeBase::GetAudioBgm() {
    return NULL;
}

void AE28GameModeBase::BpStopBgm() {
}

void AE28GameModeBase::BpPlayBgm(USoundCue* _cue) {
}

void AE28GameModeBase::BpPauseBgm(bool _pause) {
}

void AE28GameModeBase::BpFadeOutBgm(float _fadeTime) {
}

void AE28GameModeBase::BpFadeOutAndPlayBgm(float _fadeTime, USoundCue* _cue) {
}

void AE28GameModeBase::BpFadeInBgm(float _fadeTime) {
}

void AE28GameModeBase::BpAdjustVolumeBgm(float _fadeTime, float _level) {
}


