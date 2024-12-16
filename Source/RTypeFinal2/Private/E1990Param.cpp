#include "E1990Param.h"

UE1990Param::UE1990Param() {
    this->Life = 1000;
    this->Defence = 0;
    this->Score = 2000;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->WaitDamageSETime = 0.30f;
    this->WaitNodamageSETime = 0.30f;
    this->WaitDeathSETime = 0.30f;
    this->DamageSound = NULL;
    this->NoDamageSound = NULL;
    this->DeathSound = NULL;
}


