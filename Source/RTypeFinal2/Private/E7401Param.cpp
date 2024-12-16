#include "E7401Param.h"

UE7401Param::UE7401Param() {
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->SpawnEffect = NULL;
    this->DeathEffect = NULL;
    this->SoundDeath = NULL;
    this->WaitDeathSETime = 0.00f;
    this->SoundSpawn = NULL;
    this->WaitSpawnSETime = 0.00f;
    this->SoundRetreat = NULL;
    this->WaitRetreatSETime = 0.00f;
    this->AttackEffect = NULL;
    this->AttackParam = NULL;
    this->MoveEffect = NULL;
    this->ShootAngleNum = 0;
    this->Defence = 0;
    this->Score = 100;
    this->PlayerCheckOffset = 0.00f;
    this->MoveSpeed = 0.00f;
    this->LandInOutMoveTime = 0.00f;
    this->LandInOutMoveSpeed = 0.00f;
    this->RotationMoveSpeed = 0.00f;
    this->AccelerationTime = 0.00f;
    this->SpawnVecX = 0;
    this->SpawnVecY = 0;
    this->MoveTime = 0.00f;
    this->ShotStartTime = 0.00f;
}


