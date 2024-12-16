#include "E1991Param.h"

UE1991Param::UE1991Param() {
    this->Life = 400;
    this->Defence = 0;
    this->Score = 300;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->StopSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->WaitStopSETime = 0.07f;
    this->WaitDamageSETime = 0.00f;
    this->WaitDeathSETime = 0.07f;
    this->DeathTime = 1.00f;
}


