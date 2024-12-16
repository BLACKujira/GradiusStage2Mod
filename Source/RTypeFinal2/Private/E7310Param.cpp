#include "E7310Param.h"

UE7310Param::UE7310Param() {
    this->Life = 0;
    this->Score = 0;
    this->Defence = 0;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->DeathEffect = NULL;
    this->BFireEffect = NULL;
    this->BFireEffectS = NULL;
    this->DamageSound = NULL;
    this->WaitDamageSETime = 0.00f;
    this->DeathSound = NULL;
    this->WaitDeathSETime = 0.00f;
    this->RotateStartTime = 0.00f;
    this->MaxSearchAngle = 0.00f;
    this->DispOutTime = 0.00f;
}


