#include "E7204Param.h"

UE7204Param::UE7204Param() {
    this->Life = 100;
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->AnimWalkMoveSpeed = 0.00f;
    this->ShootEff = NULL;
    this->MoveSpeed = 0.00f;
    this->FallSpeed = 0.00f;
    this->ClimbAngle = 0.00f;
    this->DownAngle = 0.00f;
    this->JumpDistance = 0.00f;
    this->JumpTime = 0.00f;
    this->ShotWaitTime = 0.00f;
    this->ShotMoveDistance = 0.00f;
    this->ShotSearchInterval = 0.00f;
    this->NoShotLength = 0.00f;
    this->AttackParam = NULL;
    this->SoundShotWaitSETime = 0.07f;
    this->SoundShot = NULL;
    this->SoundDeath = NULL;
}


