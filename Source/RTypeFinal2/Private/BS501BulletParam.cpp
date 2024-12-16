#include "BS501BulletParam.h"

UBS501BulletParam::UBS501BulletParam() {
    this->Life = 1;
    this->Defence = 0;
    this->Score = 400;
    this->BodyMesh = NULL;
    this->ShotHeightZ1 = 4000.00f;
    this->ShotHeightZ2 = -3000.00f;
    this->ShotFirstVelocity = 6000.00f;
    this->ShotImpactDepth = 1800.00f;
    this->RotateSpeed = 720.00f;
    this->WaterLevel = 0.00f;
    this->EffectDestroyNotWater = NULL;
    this->EffectDestroyInWater = NULL;
    this->EffectSpawnNotWater = NULL;
    this->EffectSpawnInWater = NULL;
    this->SoundDestroy = NULL;
    this->LarvaParam = NULL;
}


