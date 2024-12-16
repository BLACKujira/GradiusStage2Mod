#include "E003Param.h"

UE003Param::UE003Param() {
    this->Life = 100;
    this->Defence = 0;
    this->Score = 100;
    this->ScreenProjectionLimitDistance = 2000.00f;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->AnimWalkMoveSpeed = 0.00f;
    this->MoveSpeed = 0.00f;
    this->FallSpeed = 0.00f;
    this->ClimbAngle = 0.00f;
    this->DownAngle = 0.00f;
    this->TurnSpeed = 0.00f;
    this->JumpLength = 0.00f;
    this->JumpTime = 0.00f;
    this->JumpEffect = NULL;
    this->JumpEffectAttachSocketName.AddDefaulted(2);
    this->TurretSpeed = 0.00f;
    this->AttackEffect = NULL;
    this->AttackParam = NULL;
    this->ShootAngleNum = 0;
    this->SoundDeath = NULL;
}


