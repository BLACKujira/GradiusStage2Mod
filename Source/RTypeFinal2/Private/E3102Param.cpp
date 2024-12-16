#include "E3102Param.h"

UE3102Param::UE3102Param() {
    this->Defence = 0;
    this->Score = 200;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->SearchLength = 5000.00f;
    this->SearchRotSpeed = 100.00f;
    this->MoveSpeed = 5000.00f;
    this->MoveTime = 1.00f;
    this->Deceleration = 1500.00f;
    this->DeathSound = NULL;
    this->DeathTime = 1.00f;
    this->BirthSound = NULL;
    this->DropSound = NULL;
}


