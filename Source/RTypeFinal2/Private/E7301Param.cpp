#include "E7301Param.h"

UE7301Param::UE7301Param() {
    this->Life = 1;
    this->SPLife = 0;
    this->Defence = 0;
    this->Score = 0;
    this->BodyMesh = NULL;
    this->SPBodyMesh = NULL;
    this->AnimBP = NULL;
    this->UnionEffect = NULL;
    this->PreyEffect = NULL;
    this->WaitDeathSETime = 0.10f;
    this->SoundDeath = NULL;
    this->DispOutTime = 0.00f;
    this->BoundsScale = 0.00f;
    this->ActTickInterval = 0.00f;
}


