#include "E1818Param.h"

UE1818Param::UE1818Param() {
    this->Life = 1;
    this->Defence = 0;
    this->Score = 200;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->MoveSpeed = 1500.00f;
    this->FallSpeed = 3000.00f;
    this->JumpFowardSpeed = 1200.00f;
    this->JumpUpSpeed = 3500.00f;
    this->Gravity = 3000.00f;
    this->LandCheckFront = 500.00f;
    this->TurnTime = 1.00f;
    this->AttackParam = NULL;
    this->JumpEffect = NULL;
    this->FireEffect = NULL;
    this->SoundDeath = NULL;
}


