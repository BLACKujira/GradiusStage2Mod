#include "E2403Param.h"

UE2403Param::UE2403Param() {
    this->Defence = 0;
    this->Score = 3000;
    this->FallGravity = -400.00f;
    this->riseGravity = -1000.00f;
    this->MaxSpeed = 5000.00f;
    this->AttackTimer = 2.00f;
    this->totalShot = 30000;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->UE2403shotParam = NULL;
    this->US2403Param = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
}


