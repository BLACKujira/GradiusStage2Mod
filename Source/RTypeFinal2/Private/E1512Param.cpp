#include "E1512Param.h"

UE1512Param::UE1512Param() {
    this->Defence = 0;
    this->Score = 2000;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->MoveSpeed = 3000.00f;
    this->OmenTime = 0.50f;
    this->AttackParam = NULL;
    this->OmenEff = NULL;
    this->ShotScreenPosX = 10000.00f;
    this->ShotScreenPosZ = 5000.00f;
    this->FadeOutTime = 0.50f;
    this->WaitDamageSETime = 0.10f;
    this->WaitDeathSETime = 0.10f;
    this->ShotSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
}


