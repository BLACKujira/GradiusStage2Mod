#include "E2605Param.h"

UE2605Param::UE2605Param() {
    this->Defence = 0;
    this->Score = 100;
    this->DispOutScreenRange = 0.00f;
    this->ShootableScreenRange = 0.00f;
    this->BodyMesh = NULL;
    this->HatchMesh = NULL;
    this->BrokenBodyMesh = NULL;
    this->AnimBP = NULL;
    this->HatchAnimBP = NULL;
    this->ChargeSound = NULL;
    this->LaserSound = NULL;
    this->DamageSound = NULL;
    this->NoDamageSound = NULL;
    this->DeathSound = NULL;
    this->ChargeEffect = NULL;
    this->ShotEffect = NULL;
    this->ShootParam = NULL;
    this->DisappearTime = 0.00f;
    this->ForceSpeed = 0.00f;
    this->LaserSize = 0.00f;
}


