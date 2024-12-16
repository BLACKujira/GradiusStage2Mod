#include "E3704Param.h"

UE3704Param::UE3704Param() {
    this->Life = 1;
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->TurretSpeed = 60.00f;
    this->AttackParam = NULL;
    this->AimAngle_Min = -157.50f;
    this->AimAngle_Max = 157.50f;
    this->CanAimOnRapid = true;
    this->SoundDeath = NULL;
}


