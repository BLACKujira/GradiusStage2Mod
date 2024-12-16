#include "E3650Param.h"

UE3650Param::UE3650Param() {
    this->Life = 1;
    this->Defence = 0;
    this->Score = 200;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->playRate = 1.00f;
    this->DeathTime = 0.50f;
    this->PathData[0] = NULL;
    this->PathData[1] = NULL;
    this->AttackParam = NULL;
    this->ShootAngleNum = 0;
    this->SoundDeath = NULL;
}


