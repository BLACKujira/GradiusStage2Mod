#include "E1701Param.h"

UE1701Param::UE1701Param() {
    this->Life = 200;
    this->Defence = 0;
    this->Score = 200;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->SearchDistance = 3500.00f;
    this->SearchLimitAngle = 180.00f;
    this->SearchLimitTime = 10.00f;
    this->LandDisengageTime = 0.50f;
    this->RailLimitAngle = 180.00f;
    this->RotatePow = 4;
    this->SoundDamage = NULL;
    this->WaitDamageSETime = 0.07f;
    this->SoundDeath = NULL;
    this->WaitDeathSETime = 0.10f;
}


