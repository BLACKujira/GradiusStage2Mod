#include "E1502Param.h"

UE1502Param::UE1502Param() {
    this->Life = 1;
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->BodyMesh_LOD = NULL;
    this->UseLODMesh = false;
    this->AnimBP = NULL;
    this->RotSpeed = 180.00f;
    this->NoChargedTime = 1.00f;
    this->ChargedEff = NULL;
    this->DischargeSpeed = 1000.00f;
    this->DischargeRad = 1500.00f;
    this->EffRate = 0.80f;
    this->DischargeEff = NULL;
    this->AttackParam = NULL;
    this->ShotScreenPosX = 10000.00f;
    this->ShotScreenPosZ = 5000.00f;
    this->WaitDeathSETime = 0.10f;
    this->DeathSound = NULL;
}


