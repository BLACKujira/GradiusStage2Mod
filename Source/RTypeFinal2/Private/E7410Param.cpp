#include "E7410Param.h"

UE7410Param::UE7410Param() {
    this->Defence = 0;
    this->Score = 100;
    this->MoveSpeed = 0.00f;
    this->RotateSlerpSpeed_Wait = 1.00f;
    this->RotateSlerpSpeed_Mode = 1.00f;
    this->ShootAngle = 0.00f;
    this->MoveSpeed_Wall = 0.00f;
    this->RecoverTime = 0.00f;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->DeathEffect = NULL;
    this->AttackParam = NULL;
    this->ShootSpeed = 4000.00f;
    this->SignEffect = NULL;
    this->ShootSighTime = 0.00f;
    this->ShotEffect = NULL;
    this->SoundDeath = NULL;
    this->WaitDeathSETime = 0.00f;
}


