#include "E542Param.h"

UE542Param::UE542Param() {
    this->Defence = 0;
    this->Score = 1000;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->BulletParam = NULL;
    this->ShootAngleCenter = 60.00f;
    this->ShootAngleRange = 45.00f;
    this->ShootFloatPower = 2500.00f;
    this->ShootMaxFloatVelocity = 4000.00f;
    this->ShootHorizontalDeceleration = 500.00f;
    this->ShootInertiaRate = 1.00f;
    this->ShootVelocity[0] = 3600.00f;
    this->ShootVelocity[1] = 3600.00f;
    this->ShootVelocity[2] = 3600.00f;
    this->ShootVelocity[3] = 3600.00f;
    this->ShootVelocity[4] = 3600.00f;
    this->ShootStraightTime[0] = 1.00f;
    this->ShootStraightTime[1] = 1.00f;
    this->ShootStraightTime[2] = 1.00f;
    this->ShootStraightTime[3] = 1.00f;
    this->ShootStraightTime[4] = 1.00f;
    this->ShootAngleTestPattern = false;
    this->WalkVelocity = 2000.00f;
    this->SoundDeath = NULL;
    this->SoundShoot = NULL;
    this->DeathTime = 2.00f;
}


