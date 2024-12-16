#include "E1704Param.h"

UE1704Param::UE1704Param() {
    this->Defence = 0;
    this->Score = 2000;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->LaserOmenTime = 0.50f;
    this->NotHitTime = 0.50f;
    this->E1704LaserParam = NULL;
    this->SearchMoveSpeed = 3000.00f;
    this->StraightTime[0] = 0.50f;
    this->StraightTime[1] = 0.50f;
    this->StraightTime[2] = 0.50f;
    this->StraightTime[3] = 0.50f;
    this->SearchAngle = 60.00f;
    this->SearchTime = 3.00f;
    this->SearchShotOmenTime = 0.50f;
    this->E1704ShotParam = NULL;
    this->LaserOmenEff = NULL;
    this->SearchOmenEff = NULL;
    this->LaserShotEff = NULL;
    this->SearchShotEff = NULL;
    this->WaitNodamageSETime = 0.10f;
    this->WaitDamageSETime = 0.10f;
    this->WaitDeathSETime = 0.10f;
    this->NoDamageSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
}


