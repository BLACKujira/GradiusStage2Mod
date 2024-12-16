#include "BS501Param.h"

UBS501Param::UBS501Param() {
    this->Defence = 0;
    this->Score = 400;
    this->BodyMesh = NULL;
    this->BodyMesh2 = NULL;
    this->UseMesh = 0;
    this->AnimBP = NULL;
    this->BulletParam = NULL;
    this->LaserParam = NULL;
    this->BigDamageAmount = 3000.00f;
    this->ShotWaitTime = 5.00f;
    this->NoShotRange = 500.00f;
    this->ShotDepth = 0.00f;
    this->LaserSustainTime = 2.00f;
    this->LaserWaitTime = 10.00f;
    this->PressWaitTime = 0.20f;
    this->WaterLevel = 0.00f;
    this->DeathFallGravity = 1000.00f;
    this->ShotAnimWaitTime = 0.30f;
    this->SearchInterval = 0.50f;
    this->TotalBattleTime = 180.00f;
    this->WeaknessChangeTime = 20.00f;
    this->SoundCharge = NULL;
    this->SoundShotLaser = NULL;
    this->SoundShot = NULL;
    this->SoundDamage = NULL;
    this->SoundBigDamage = NULL;
    this->SoundDestroy = NULL;
    this->WaitSETime = 0.30f;
    this->EffectLightningSign = NULL;
    this->EffectShibukiRight = NULL;
    this->EffectShibukiLeft = NULL;
    this->EffectShot = NULL;
}


