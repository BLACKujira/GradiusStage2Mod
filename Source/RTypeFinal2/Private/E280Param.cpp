#include "E280Param.h"

UE280Param::UE280Param() {
    this->Defence = 0;
    this->Score = 200;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->GrowthSpeed = 1.00f;
    this->GermSound = NULL;
    this->ShootSound = NULL;
    this->DeathSound = NULL;
    this->DeathTime = 0.50f;
    this->S280Param = NULL;
    this->BulletSpeed = 2000.00f;
    this->UpBulletStraightTime = 1.00f;
    this->DownBulletStraightTime = 1.00f;
    this->BulletAcceleration = 980.00f;
    this->BulletMaxSpeed = 4000.00f;
    this->BulletAngleSpace = 20.00f;
    this->ShootRapidInterval = 1.00f;
    this->SmokeEffect = NULL;
    this->BubbleEffect = NULL;
    this->ShootEffect = NULL;
    this->GermSignTime = 1.00f;
}


