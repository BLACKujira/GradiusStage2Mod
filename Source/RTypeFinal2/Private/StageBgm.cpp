#include "StageBgm.h"

AStageBgm::AStageBgm(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CueBgm = NULL;
    this->AudioBgm = NULL;
}

void AStageBgm::BpStopBgm() {
}

void AStageBgm::BpSetAudioBgm(UAudioComponent* _audioBgm) {
}

void AStageBgm::BpPlayBgm(USoundCue* _cue) {
}

void AStageBgm::BpPauseBgm(bool _pause) {
}

UAudioComponent* AStageBgm::BpGetAudioBgm() {
    return NULL;
}

void AStageBgm::BpFadeOutBgm(float _fadeTime) {
}

void AStageBgm::BpFadeOutAndPlayBgm(float _fadeTime, USoundCue* _cue) {
}

void AStageBgm::BpFadeInBgm(float _fadeTime) {
}

void AStageBgm::BpAdjustVolumeBgm(float _fadeTime, float _level) {
}


