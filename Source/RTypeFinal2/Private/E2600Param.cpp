#include "E2600Param.h"

UE2600Param::UE2600Param() {
    this->Life = 0;
    this->Defence = 0;
    this->Score = 0;
    this->CollisionBoxArray.AddDefaulted(20);
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->DefaultMoveSpeed = 0.00f;
    this->SetPosCommandInvalidRange = 0.00f;
    this->DeathTime = 0.00f;
}


