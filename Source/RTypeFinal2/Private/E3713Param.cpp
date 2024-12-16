#include "E3713Param.h"

UE3713Param::UE3713Param() {
    this->Defence = 0;
    this->Score = 1000;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->E3712Param = NULL;
    this->ShootWaitTime = 1.00f;
    this->ShootDir.AddDefaulted(8);
    this->ShootBaseSpeed = 3000.00f;
    this->SpeedVariation = 1.00f;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->DeathTime = 0.50f;
    this->ShootEffect = NULL;
}


