#include "E7202Param.h"

UE7202Param::UE7202Param() {
    this->Defence = 0;
    this->Score = 800;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->BFEffect = NULL;
    this->BFEffectScrewRate = 1.00f;
    this->BFEffectPortRate = 4.00f;
    this->BFEffectPortLife = 0.70f;
    this->BFEffectBulletRate = 7.00f;
    this->BFEffectBulletLife = 1.20f;
    this->S7201Param = NULL;
    this->S7202BulletParam = NULL;
    this->RotationTime = 1.00f;
    this->BulletRotSpeed = 90.00f;
    this->BulletWatiTime = 5.00f;
    this->TrpdNoShotDistance = 2000.00f;
    this->BulletNoShotDistance = 2000.00f;
    this->BulletShotDelay = 0.50f;
    this->TrpdSpeedY = 2000.00f;
    this->SoundShot = NULL;
    this->SoundShotWaitSETime = 0.07f;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->DeathTime = 2.00f;
}


