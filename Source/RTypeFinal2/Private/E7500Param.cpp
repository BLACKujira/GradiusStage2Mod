#include "E7500Param.h"

UE7500Param::UE7500Param() {
    this->Defence = 0;
    this->Score = 500;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->JumpSound = NULL;
    this->WaitTimeDamageSE = 0.10f;
    this->WaitTimeDeathSE = 0.10f;
    this->WaitTimeJumpSE = 1.00f;
    this->DelayTimeJumpSE = 0.00f;
    this->HorizontalSpeed = 0.00f;
    this->UpwardInitialVelocity = 0.00f;
    this->DownwardAccelaration = 0.00f;
    this->MaxFallSpeed = 0.00f;
    this->LandigWaitTime = 0.00f;
    this->MaxShiftCount = 1000;
}


