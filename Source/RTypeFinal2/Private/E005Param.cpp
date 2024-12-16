#include "E005Param.h"

UE005Param::UE005Param() {
    this->Defence = 0;
    this->Score = 100;
    this->LandRotWeight = 0.50f;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->AnimWalkMoveSpeed = 0.00f;
    this->MoveSpeed = 0.00f;
    this->ClimbAngle = 0.00f;
    this->DownAngle = 0.00f;
    this->WalkModeTime = 0.00f;
    this->AttackModeTime = 0.00f;
    this->KeepDistMIN = 0.00f;
    this->KeepDistMAX = 0.00f;
    this->KeepDistADJ = 0.00f;
    this->ShootPointSocketNames.AddDefaulted(4);
    this->ShootEffect = NULL;
    this->ShootParam = NULL;
    this->ShootSound = NULL;
    this->SoundDeath = NULL;
}


