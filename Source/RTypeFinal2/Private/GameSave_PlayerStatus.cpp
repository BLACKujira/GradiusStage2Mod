#include "GameSave_PlayerStatus.h"

FGameSave_PlayerStatus::FGameSave_PlayerStatus() {
    this->LifeTime = 0.00f;
    this->SpeedLevelH = EAircraftSpeedLevelH::Level00;
    this->MissileLevel = 0;
    this->HaveForce = false;
    this->ForceDockBack = false;
    this->ForceLevel = EForceLevel::Level_1;
    this->ForceAttr = EForceAttr::BLUE;
    this->BitLevel = 0;
    this->BitNum = 0;
    this->DoseCharge = 0.00f;
    this->B014Color = 0;
    this->SpeedLevel = EAircraftSpeedLevel::Level0;
}

