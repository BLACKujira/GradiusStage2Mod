#include "GhostPlayerBase.h"

AGhostPlayerBase::AGhostPlayerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GhostMan = NULL;
    this->LoadPhase = EGhostLoadPhase::Idle;
    this->bSetup = false;
    this->Score = 0;
    this->bCurrentActive = false;
    this->Index = 0;
    this->Type = EGhostType::AIRCRAFT;
}

void AGhostPlayerBase::SetTexture(UTexture2D* _tex) {
}

void AGhostPlayerBase::SetSize(float _x, float _y) {
}

void AGhostPlayerBase::SetOffset(const FVector& _offset) {
}

void AGhostPlayerBase::SetColor(const FLinearColor& _color) {
}

void AGhostPlayerBase::SetCameraOffset(float _offset) {
}


