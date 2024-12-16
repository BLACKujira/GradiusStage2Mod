#include "E640Param.h"

UE640Param::UE640Param() {
    this->Defence = 0;
    this->NormalScore = 500;
    this->ShotScore = 500;
    this->StrongScore = 500;
    this->CoreScore = 1000;
    this->BackMesh = NULL;
    this->NormalMesh = NULL;
    this->NormalAnimBP = NULL;
    this->ShotMesh = NULL;
    this->ShotAnimBP = NULL;
    this->StrongMesh = NULL;
    this->StrongAnimBP = NULL;
    this->CoreMesh = NULL;
    this->CoreAnimBP = NULL;
    this->BulletParam = NULL;
    this->DamagedAngle = 90.00f;
    this->DamagedCenterOption = 200.00f;
    this->DestroyedChainSpan = 0.40f;
    this->SoundDeath = NULL;
}


