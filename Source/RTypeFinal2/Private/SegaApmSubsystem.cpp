#include "SegaApmSubsystem.h"

USegaApmSubsystem::USegaApmSubsystem() {
    this->ContinueType = ESegaApm_ContinueType::None;
}

void USegaApmSubsystem::SetSelectedContinue(bool _yes) {
}

void USegaApmSubsystem::SetPressedStartbutton(bool _on) {
}

void USegaApmSubsystem::SetPressedCountdown(bool _on) {
}

void USegaApmSubsystem::SetGamePhaseNext(ESegaApm_GamePhase _phase) {
}

void USegaApmSubsystem::SetContinueTimerMax(float _time) {
}


bool USegaApmSubsystem::GetSelectedContinue() const {
    return false;
}

bool USegaApmSubsystem::GetPressedStartbutton() const {
    return false;
}

bool USegaApmSubsystem::GetPressedCountdown() const {
    return false;
}

ESegaApm_ContinueType USegaApmSubsystem::GetContinueType() const {
    return ESegaApm_ContinueType::None;
}

int32 USegaApmSubsystem::GetContinueTimerLeftInt() {
    return 0;
}

float USegaApmSubsystem::GetContinueTimerLeft() {
    return 0.0f;
}


