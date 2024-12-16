#include "E7451Param.h"

UE7451Param::UE7451Param() {
    this->BodyMeshs.AddDefaulted(1);
    this->Life = 0;
    this->Defence = 0;
    this->Score = 0;
    this->ExtentSizeA = 0.00f;
    this->ExtentSizeB = 0.00f;
    this->ExtentSizeC = 0.00f;
    this->DeathEffect = NULL;
    this->DeathSound = NULL;
    this->WaitDeathSETime = 0.00f;
}


