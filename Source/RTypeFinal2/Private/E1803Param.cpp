#include "E1803Param.h"

UE1803Param::UE1803Param() {
    this->Life = 100;
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->BodyAnimFly = NULL;
    this->ItemSpawnOffset = 0.00f;
    this->DeathEffect = NULL;
    this->PathData[0] = NULL;
    this->PathData[1] = NULL;
    this->MoveEffect = NULL;
    this->AttackEffect = NULL;
    this->AttackParam = NULL;
    this->ShootAngleNum = 0;
    this->SoundDeath = NULL;
}


