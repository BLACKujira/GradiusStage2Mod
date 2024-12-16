#include "E7100Param.h"

UE7100Param::UE7100Param() {
    this->Life = 1;
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->ForceParam = NULL;
    this->ChangeWaitTime = 0.50f;
    this->OmenTime = 0.50f;
    this->RapidShotInterval = 0.50f;
    this->ShotAngleNum = 32;
    this->AttackParam = NULL;
    this->ShotScreenPosX = 10000.00f;
    this->ShotScreenPosZ = 5000.00f;
    this->JetEff = NULL;
    this->OmenEff = NULL;
    this->WaitDeathSETime = 0.10f;
    this->DeathSound = NULL;
}


