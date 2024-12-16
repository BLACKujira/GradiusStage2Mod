#include "E2921Param.h"

UE2921Param::UE2921Param() {
    this->Defence = 0;
    this->Score = 500;
    this->DispOutScreenRange = 0.00f;
    this->ScreenProjectionLimitDistance = 0.00f;
    this->VernierEffect = NULL;
    this->VernierJumpEffect = NULL;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->WaitTimeDamageSE = 0.10f;
    this->WaitTimeDeathSE = 0.10f;
    this->TurretSpeed = 0.00f;
    this->AttackEffect = NULL;
    this->AttackParam = NULL;
    this->ShootAngleNum = 0;
    this->HorizontalSpeed = 0.00f;
    this->UpwardInitialVelocity = 0.00f;
    this->DownwardAccelaration = 0.00f;
    this->MaxFallSpeed = 0.00f;
    this->LandigWaitTime = 0.00f;
    this->MaxShiftCount = 1000;
}


