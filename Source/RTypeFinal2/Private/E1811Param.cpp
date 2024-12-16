#include "E1811Param.h"

UE1811Param::UE1811Param() {
    this->Life = 100;
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->BodyAnimFly = NULL;
    this->DeathEffect = NULL;
    this->PathData[0] = NULL;
    this->PathData[1] = NULL;
    this->MoveEffect = NULL;
    this->AttackEffect = NULL;
    this->AttackParam = NULL;
    this->ShootAngleNum = 0;
    this->SoundDeath = NULL;
}


