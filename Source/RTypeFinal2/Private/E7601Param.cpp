#include "E7601Param.h"

UE7601Param::UE7601Param() {
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
    this->E7601_WallParam = NULL;
    this->WallDistance = 0.00f;
    this->SoundSpawnWall = NULL;
    this->WaitSoundSpawnWallSETime = 0.00f;
    this->CreateWallEffect = NULL;
    this->BodyMesh = NULL;
    this->BodyMesh_Shot = NULL;
    this->BodyAnimBP = NULL;
    this->BodyAnimBP_Shot = NULL;
    this->AttackParam = NULL;
    this->DeathEffect = NULL;
    this->SoundDeath = NULL;
    this->WaitDeathSETime = 0.00f;
    this->SmorkEffect = NULL;
    this->SmorkSocketName.AddDefaulted(4);
    this->HahenEffect = NULL;
    this->ShootEffect = NULL;
}


