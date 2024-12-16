#include "E711Param.h"

UE711Param::UE711Param() {
    this->Defence = 0;
    this->Score = 200;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->DeathTime = 0.50f;
    this->DeathSound = NULL;
    this->NormalRotSpeed = 10.00f;
    this->DamagedRotSpeed = 40.00f;
    this->BackTime = 2.00f;
    this->ImpactBias = 1000000.00f;
    this->InhaledScaleDownSpeed = 0.25f;
    this->InhaledMinScale = 0.30f;
}


