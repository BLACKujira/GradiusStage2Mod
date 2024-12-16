#include "E1906Param.h"

UE1906Param::UE1906Param() {
    this->Life = 1;
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->MoveEffect = NULL;
    this->MoveSpeed = 3000.00f;
    this->MoveLength = 3000.00f;
    this->IsLookingAtPlayer = true;
    this->RotateSlerpSpeed = 3.00f;
    this->AttackParam = NULL;
    this->ShootLength = 2000.00f;
    this->ShootAngleNum = 32;
    this->WaitDeathSETime = 0.10f;
    this->SoundDeath = NULL;
}


