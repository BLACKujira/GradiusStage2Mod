#include "E2611Param.h"

UE2611Param::UE2611Param() {
    this->Defence = 0;
    this->Score = 100;
    this->DispOutScreenRange = 0.00f;
    this->ShootableScreenRange = 0.00f;
    this->BodyMesh = NULL;
    this->CoreMesh = NULL;
    this->CannonMesh = NULL;
    this->BrokenCannonMesh = NULL;
    this->BodyAnimBP = NULL;
    this->CoreAnimBP = NULL;
    this->CannonAnimBP = NULL;
    this->ChargeSound = NULL;
    this->BoostSound = NULL;
    this->DamageSound = NULL;
    this->NoDamageSound = NULL;
    this->DeathSound = NULL;
    this->ChargeEffect = NULL;
    this->ShotEffect = NULL;
    this->ForceSpeed = 0.00f;
}


