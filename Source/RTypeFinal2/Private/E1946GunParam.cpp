#include "E1946GunParam.h"

UE1946GunParam::UE1946GunParam() {
    this->Life = 300;
    this->Defence = 0;
    this->Score = 150;
    this->Mesh = NULL;
    this->AnimBP = NULL;
    this->RotLimitSpeed = 180.00f;
    this->ShotAngleNum = 32;
    this->ShotStartTime = 0.50f;
    this->OmenTime = 0.50f;
    this->AttackParam = NULL;
    this->WaitDeathSETime = 0.30f;
    this->ShotSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
}


