#include "E2510Param.h"

UE2510Param::UE2510Param() {
    this->Life = 200;
    this->Defence = 0;
    this->Score = 200;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->ShotEffect = NULL;
    this->MoveSpeed = 2500.00f;
    this->FallSpeed = 5000.00f;
    this->RotateSlerpTime = 0.20f;
    this->ForwardCheckLength = 1200.00f;
    this->DownCheckLength = 3000.00f;
    this->AttackParam = NULL;
    this->ShootLength = 2000.00f;
    this->ShootAngleNum = 32;
    this->SoundDeath = NULL;
}


