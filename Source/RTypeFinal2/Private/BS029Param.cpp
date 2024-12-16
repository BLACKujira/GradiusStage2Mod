#include "BS029Param.h"

UBS029Param::UBS029Param() {
    this->Collision_Offset = 0.00f;
    this->Collision_Body.AddDefaulted(12);
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->SunGear_Mesh = NULL;
    this->SunGear_AnimBP = NULL;
    this->NoDamageSE = NULL;
    this->NodamageSEWaitTime = 0.00f;
    this->SmallExplosionSE = NULL;
    this->MiddleExplosionSE = NULL;
    this->LargeExplosionSE = NULL;
    this->MoveSE = NULL;
    this->DeathTime = 5.00f;
    this->LargeExplosionDelay = 0.00f;
    this->SmallExplosionInterval = 0.00f;
    this->SunGearRotateRate = 4.00f;
    this->PlanetaryGearRotateRate = -2.00f;
    this->OuterGearDiameter = 0.00f;
    this->StartDegree = 0.00f;
    this->DestructTime = 300.00f;
    this->ShatterOpenTime = 0.00f;
    this->LapSpeedRateWhenTwoGear = 2.00f;
    this->LapSpeedRateWhenOneGear = 3.00f;
    this->ShootTymingDiffDegree = 0.00f;
    this->NonShootAreaWidth = 0.00f;
}


