#include "BS026CannonParam.h"

UBS026CannonParam::UBS026CannonParam() {
    this->Defence = 0;
    this->Score = 100;
    this->DispOutScreenRange = 0.00f;
    this->ShootableScreenRange = 0.00f;
    this->EyeMesh = NULL;
    this->ArmMesh = NULL;
    this->EyeAnimBP = NULL;
    this->ArmAnimBP = NULL;
    this->DamageSound = NULL;
    this->LaserSignSound = NULL;
    this->LaserSound = NULL;
    this->DeathSound = NULL;
    this->SignEffect = NULL;
    this->ChargeEffect = NULL;
    this->ShotEffect = NULL;
    this->DisappearTime = 0.00f;
}


