#include "E2707MissileParam.h"

UE2707MissileParam::UE2707MissileParam() {
    this->Power = 100;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->FireEffect = NULL;
    this->DeathEffect = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->MissileHatchOpenTime = 1.00f;
    this->MissileSlideSpeed = 100.00f;
    this->MissileSlideTime = 1.00f;
    this->MissileUnguideTime = 1.00f;
    this->MissileSearchInterval = 1.00f;
    this->MissileEnableTime = 1.00f;
}


