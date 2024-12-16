#include "E071Param.h"

UE071Param::UE071Param() {
    this->Life = 600;
    this->Defence = 0;
    this->Score = 1000;
    this->ModelMesh = NULL;
    this->ModelAnimBP = NULL;
    this->BallOpenWaitTime = 0.00f;
    this->BallShootWaitTime = 0.00f;
    this->BallCloseWaitTime = 0.00f;
    this->BallParam = NULL;
    this->EffectThruster = NULL;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
}


