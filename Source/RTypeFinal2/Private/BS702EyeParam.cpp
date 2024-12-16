#include "BS702EyeParam.h"

UBS702EyeParam::UBS702EyeParam() {
    this->Life = 100;
    this->Power = 0;
    this->Defence = 0;
    this->Score = 0;
    this->DeathTime = 0.00f;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->HitEffect = NULL;
    this->DeathSound = NULL;
    this->WaitDeathSETime = 0.00f;
    this->EyeStraightTime = 0.00f;
    this->EyeSearchInterval = 0.00f;
    this->DebugFlag = false;
}


