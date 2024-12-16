#include "E7403Param.h"

UE7403Param::UE7403Param() {
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->DeathEffect = NULL;
    this->SoundShot = NULL;
    this->WaitShotSETime = 0.00f;
    this->SoundDeath = NULL;
    this->WaitDeathSETime = 0.00f;
    this->AttackEffect = NULL;
    this->AttackParam = NULL;
    this->MoveEffect = NULL;
    this->Defence = 0;
    this->Score = 100;
    this->MoveStartLine = 0.00f;
    this->MoveSpeed_Forward = 0.00f;
    this->MoveSpeed_Backward = 0.00f;
    this->ShotLength = 0.00f;
    this->PlayerCheckOffset = 0.00f;
    this->RotationTime = 0.00f;
    this->SpawnVecX = 0;
    this->MoveType = 0;
    this->MoveLimitRange = 0.00f;
    this->AttackStartTimer = 0.00f;
}


