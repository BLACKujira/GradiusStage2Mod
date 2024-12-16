#include "E5204Param.h"

UE5204Param::UE5204Param() {
    this->Defence = 0;
    this->Score = 400;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->TurretRotateSpeed = 20.00f;
    this->FireInterval = 0.20f;
    this->MissileStraightTime = 1.00f;
    this->MissileSearchTime = 1.00f;
    this->MissileNotShotPosCor = -1500.00f;
    this->MissileParam = NULL;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
}


