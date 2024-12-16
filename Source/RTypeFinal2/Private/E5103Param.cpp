#include "E5103Param.h"

UE5103Param::UE5103Param() {
    this->Life = 100;
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->AnimWalkMoveSpeed = 0.00f;
    this->ChangeEff = NULL;
    this->DamageEff = NULL;
    this->deathEff = NULL;
    this->ShootEff = NULL;
    this->JumpEff = NULL;
    this->WaterEff = NULL;
    this->MoveSpeed = 0.00f;
    this->FallSpeed = 0.00f;
    this->ClimbAngle = 0.00f;
    this->DownAngle = 0.00f;
    this->JumpDistance = 0.00f;
    this->JumpTime = 0.00f;
    this->ChangeShootTime = 0.00f;
    this->ShootAngleNum = 0;
    this->SearchInterval = 0.00f;
    this->RotateSpeed = 0.00f;
    this->AttackParam = NULL;
    this->SoundDamageMinSpan = 0.00f;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
}


