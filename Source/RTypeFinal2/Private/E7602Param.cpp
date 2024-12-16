#include "E7602Param.h"

UE7602Param::UE7602Param() {
    this->Defence = 0;
    this->Score = 500;
    this->MoveSpeed = 2800.00f;
    this->rotateSpeedRate = 0.00f;
    this->WaitTime = 0.00f;
    this->ShotScreenRange_Left = -9000.00f;
    this->ShotScreenRange_Right = 9000.00f;
    this->ShotScreenRange_Up = 9000.00f;
    this->ShotScreenRange_Down = -9000.00f;
    this->E7601_LightParam = NULL;
    this->LightMoveSpeed = 0.00f;
    this->WallDistance = 0.00f;
    this->BodyMesh = NULL;
    this->BodyMesh_Shot = NULL;
    this->BodyAnimBP = NULL;
    this->BodyAnimBP_Shot = NULL;
    this->AttackParam = NULL;
    this->DeathEffect = NULL;
    this->SoundDeath = NULL;
    this->WaitDeathSETime = 0.00f;
    this->HahenEffect = NULL;
    this->ShootEffect = NULL;
    this->CollectionEffect = NULL;
}


