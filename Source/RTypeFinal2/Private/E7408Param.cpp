#include "E7408Param.h"

UE7408Param::UE7408Param() {
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->DeathEffect = NULL;
    this->DeathAnimTime = 0.00f;
    this->SoundSpawn = NULL;
    this->SoundShot = NULL;
    this->WaitShotSETime = 0.00f;
    this->SoundDeath = NULL;
    this->MoveEffect = NULL;
    this->AttackParam = NULL;
    this->AttackEffect = NULL;
    this->Defence = 0;
    this->Score = 100;
    this->RotationTime = 0.00f;
    this->TakeoffMoveTime = 0.00f;
    this->MoveSpeed = 0.00f;
    this->SearchInterval = 0.00f;
    this->PlayerCheckRangeLeftRight_A = 0.00f;
    this->PlayerCheckRangeLeftRight_B = 0.00f;
    this->PlayerCheckRangeUpDown_A = 0.00f;
    this->PlayerCheckRangeUpDown_B = 0.00f;
    this->TurnCheckOffset = 0.00f;
    this->AttackStartTime = 0.00f;
    this->MissileShotAltitude = 0.00f;
}


