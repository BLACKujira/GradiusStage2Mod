#include "BS026Param.h"

UBS026Param::UBS026Param() {
    this->Defence = 0;
    this->Score = 100;
    this->DispOutScreenRange = 0.00f;
    this->ShootableScreenRange = 0.00f;
    this->CoreMesh = NULL;
    this->HatchMesh = NULL;
    this->CoreAnimBP = NULL;
    this->HatchAnimBP = NULL;
    this->EyeRotateSpeed = 0.00f;
    this->EyeCannonRotateSpeed = 0.00f;
    this->DamageSound = NULL;
    this->NoDamageSound = NULL;
    this->DeathSound = NULL;
    this->CannonRevivalTime = 0.00f;
}


