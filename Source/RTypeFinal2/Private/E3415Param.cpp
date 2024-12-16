#include "E3415Param.h"

UE3415Param::UE3415Param() {
    this->Defence = 0;
    this->Score = 400;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->MoveSpeed = 1000.00f;
    this->MoveTime = 2.00f;
    this->LandCheckFront = 500.00f;
    this->LandCheckBack = 500.00f;
    this->MoveMinLength = 1000.00f;
    this->TurnPreStopTime = 0.20f;
    this->TurnTime = 1.00f;
    this->TurnPostStopTime = 0.20f;
    this->ShootPreStopTime = 0.20f;
    this->ShootTime = 2.00f;
    this->ShootPostStopTime = 0.20f;
    this->ShootEffect = NULL;
    this->ShootParam = NULL;
    this->SoundDeath = NULL;
}


