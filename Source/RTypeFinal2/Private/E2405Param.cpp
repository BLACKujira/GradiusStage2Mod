#include "E2405Param.h"

UE2405Param::UE2405Param() {
    this->Life = 200;
    this->Defence = 0;
    this->Score = 200;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->DamageSound = NULL;
    this->WaitTimeDamageSE = 0.10f;
    this->DeathSound = NULL;
    this->WaitTimeDeathSE = 0.10f;
    this->LandingParam = NULL;
    this->WaitTimeBounce = 0.10f;
    this->DownwardAcceleration = 0.00f;
    this->BounceVelocity = 0.00f;
    this->HorizontalSpeed = 0.00f;
    this->MaxShiftCount = 1000.00f;
}


