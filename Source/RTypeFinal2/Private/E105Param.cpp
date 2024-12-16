#include "E105Param.h"

UE105Param::UE105Param() {
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->BodyMesh2 = NULL;
    this->AnimBP = NULL;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
    this->SoundMissileShoot = NULL;
    this->MissileParam = NULL;
    this->MissileShootScreenOffset = 500.00f;
    this->MissileShootScreenOffsetX = 10000.00f;
    this->MissileShootScreenOffsetZ = 5000.00f;
    this->ImpactBias = 1.00f;
    this->ImpactRadiusMax = 500.00f;
    this->DisappearInDistance = 23000.00f;
    this->DisappearOutDistance = 25000.00f;
    this->DisappearAlphaTime = 0.10f;
    this->MaxLinearVelocity = 10000.00f;
    this->MaxAngularVelocity = 360.00f;
}


