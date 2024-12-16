#include "E1704ShotParam.h"

UE1704ShotParam::UE1704ShotParam() {
    this->Life = 1;
    this->Defence = 0;
    this->Score = 0;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->HitEff = NULL;
    this->WaitDeathSETime = 0.10f;
    this->DeathSound = NULL;
}


