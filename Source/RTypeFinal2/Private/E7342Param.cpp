#include "E7342Param.h"

UE7342Param::UE7342Param() {
    this->Life = 1;
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->MoveEffect = NULL;
    this->AttackEffect = NULL;
    this->AttackParam = NULL;
    this->ShootAngleNum = 32;
    this->SoundDeath = NULL;
    this->WaitDeathSETime = 0.07f;
}


