#include "E7701Param.h"

UE7701Param::UE7701Param() {
    this->Defence = 0;
    this->Score = 300;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->SideMoveSpeed = 0.00f;
    this->UpDownMoveSpeed = 0.00f;
    this->RollTime = 1.00f;
    this->RollAng = 360.00f;
    this->ShotMoveTime = 1.00f;
    this->ShotSearchInterval = 0.00f;
    this->AttackParam = NULL;
    this->ShotSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
}


