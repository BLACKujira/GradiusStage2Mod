#include "E3101Param.h"

UE3101Param::UE3101Param() {
    this->Defence = 0;
    this->Score = 200;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->Gravity = 980.00f;
    this->Buoyancy = 980.00f;
    this->DropMaxSpeed = 5000.00f;
    this->AscendMaxSpeed = 5000.00f;
    this->MoveSpeed = 3000.00f;
    this->Deceleration = 1500.00f;
    this->MoveTime = 1.00f;
    this->StopTime = 1.00f;
    this->WaterLineZ = 0.00f;
    this->NoHitTime = 0.50f;
    this->S000Param = NULL;
    this->ShootLength = 2000.00f;
    this->DeathSound = NULL;
    this->DeathTime = 1.00f;
    this->BirthSound = NULL;
    this->DropSound = NULL;
}


