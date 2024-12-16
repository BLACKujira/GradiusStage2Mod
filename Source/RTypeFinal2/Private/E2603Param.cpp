#include "E2603Param.h"

UE2603Param::UE2603Param() {
    this->Defence = 0;
    this->Score = 200;
    this->Body_Mesh = NULL;
    this->Body_Break = NULL;
    this->Body_Sign = NULL;
    this->Body_AnimBP = NULL;
    this->GunRotSpeed = 60.00f;
    this->GunMaxRot = 80.00f;
    this->GunMinRot = 0.00f;
    this->S2603Param = NULL;
    this->LaserDisapperTime = 0.00f;
    this->SmokeEffect = NULL;
    this->ChargeEffect = NULL;
    this->ShotEffect = NULL;
    this->ShotEndEffect = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->DeathTime = 0.50f;
}


