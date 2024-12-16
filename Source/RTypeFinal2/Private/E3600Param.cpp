#include "E3600Param.h"

UE3600Param::UE3600Param() {
    this->CollisionBoxA.AddDefaulted(24);
    this->CollisionBoxC.AddDefaulted(24);
    this->CollisionCapsuleA.AddDefaulted(5);
    this->CollisionCapsuleC.AddDefaulted(5);
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->ExplosionEffect = NULL;
    this->ExplosionInterval_Min = 0.30f;
    this->ExplosionInterval_Max = 0.80f;
    this->DeathPathData = NULL;
    this->PartsDataAsset = NULL;
}


