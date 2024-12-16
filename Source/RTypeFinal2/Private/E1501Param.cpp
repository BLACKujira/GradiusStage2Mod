#include "E1501Param.h"

UE1501Param::UE1501Param() {
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
    this->WaitDeathSETime = 0.10f;
    this->DeathSound = NULL;
}


