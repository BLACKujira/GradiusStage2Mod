#include "E2707Param.h"

UE2707Param::UE2707Param() {
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->BarrierMesh = NULL;
    this->AnimBP = NULL;
    this->BackEffect = NULL;
    this->FrontEffect = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->LaserShootParam = NULL;
    this->MissileShootParam = NULL;
    this->LaserTurnLength = 1000.00f;
    this->MissileHatchOpenTime = 1.00f;
    this->BarrierOffset = 6500.00f;
}


