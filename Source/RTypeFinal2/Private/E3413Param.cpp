#include "E3413Param.h"

UE3413Param::UE3413Param() {
    this->Life = 1;
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->MoveSpeed = 1500.00f;
    this->FallSpeed = 3000.00f;
    this->JumpFowardSpeed = 1200.00f;
    this->JumpUpSpeed = 3500.00f;
    this->Gravity = 3000.00f;
    this->LandCheckFront = 500.00f;
    this->TurnTime = 1.00f;
    this->TurretSpeed = 60.00f;
    this->AttackParam = NULL;
    this->JumpEffect = NULL;
    this->ShootEffect = NULL;
    this->SoundDeath = NULL;
}


