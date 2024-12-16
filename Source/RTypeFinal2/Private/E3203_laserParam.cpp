#include "E3203_laserParam.h"

UE3203_laserParam::UE3203_laserParam() {
    this->Defence = 0;
    this->Score = 200;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->Body_KMesh = NULL;
    this->ShootSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->DeathTime = 1.50f;
    this->RotSpeed = 60.00f;
    this->SearchTime = 2.00f;
    this->SignTime = 1.00f;
    this->ShootSpeed = 20000.00f;
    this->ShootTime = 2.00f;
    this->LaserEffect = NULL;
    this->ChargeEffect = NULL;
    this->HitEffect = NULL;
}


