#include "E7402Param.h"

UE7402Param::UE7402Param() {
    this->Life = 100;
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->MoveSpeed = 3000.00f;
    this->SearchSpan = 1.00f;
    this->IsLookingAtPlayer = true;
    this->RotateSlerpSpeed = 3.00f;
    this->AttackParam = NULL;
    this->ShootLength = 2000.00f;
    this->ShootAngleNum = 32;
    this->DeathEffect = NULL;
    this->SoundDeath = NULL;
    this->WaitDeathSETime = 0.00f;
}


