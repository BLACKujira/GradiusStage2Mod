#include "S5406Param.h"

US5406Param::US5406Param() {
    this->Life = 100;
    this->Defence = 0;
    this->Power = 100;
    this->Score = 0;
    this->BodyMesh = NULL;
    this->MoveEffect = NULL;
    this->HitEffect = NULL;
    this->DeathSound = NULL;
    this->StrateTime = 0.00f;
    this->SearchInterval = 0.00f;
    this->DispOutTime = 1.00f;
    this->NotIntervalFlag = false;
    this->SpeedScaleUp = 0.85f;
    this->SpeedScaleDown = 1.25f;
    this->DeathTime = 0.00f;
    this->CheckFlag = false;
    this->CheckFlagSec = false;
}


