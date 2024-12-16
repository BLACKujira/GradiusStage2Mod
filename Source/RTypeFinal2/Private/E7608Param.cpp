#include "E7608Param.h"

UE7608Param::UE7608Param() {
    this->Defence = 0;
    this->Score = 100;
    this->MoveSpeed = 0.00f;
    this->TurnTime = 0.00f;
    this->LimitX = 0.00f;
    this->CheckRange = 0.01f;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->MoveEffect = NULL;
    this->AttackParam = NULL;
    this->ShootEffect = NULL;
    this->DeathEffect = NULL;
    this->SoundDeath = NULL;
    this->WaitDeathSETime = 0.00f;
}


