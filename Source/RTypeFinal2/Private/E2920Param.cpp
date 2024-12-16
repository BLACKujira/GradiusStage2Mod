#include "E2920Param.h"

UE2920Param::UE2920Param() {
    this->Defence = 0;
    this->Score = 500;
    this->DispOutScreenRange = 0.00f;
    this->ScreenProjectionLimitDistance = 0.00f;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->VernierEffect_01 = NULL;
    this->VernierEffect_02 = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->WaitTimeDamageSE = 0.10f;
    this->WaitTimeDeathSE = 0.10f;
    this->AttackEffect = NULL;
    this->AttackParam = NULL;
    this->InitialVelocity = 0.00f;
    this->VerticalSpeed = 0.00f;
    this->Decceleration = 0.00f;
    this->MaxMoveSpeed = 0.00f;
}


