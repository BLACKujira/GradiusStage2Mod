#include "E1992Param.h"

UE1992Param::UE1992Param() {
    this->Life = 1;
    this->Defence = 0;
    this->Score = 300;
    this->CollisionIsEnableReflection = true;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->StopSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->WaitStopSETime = 0.07f;
    this->WaitDamageSETime = 0.07f;
    this->WaitDeathSETime = 0.00f;
    this->DeathTime = 1.00f;
}


