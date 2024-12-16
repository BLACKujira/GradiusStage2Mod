#include "AircraftSpeedCtrl.h"

FAircraftSpeedCtrl::FAircraftSpeedCtrl() {
    this->levelH = EAircraftSpeedLevelH::Level00;
    this->bChanged = false;
    this->bUp = false;
    this->bDown = false;
    this->bAttack = false;
    this->bB7 = false;
}

