#include "E3701Param.h"

UE3701Param::UE3701Param() {
    this->Defence = 0;
    this->Score = 800;
    this->Body_Mesh = NULL;
    this->BodyAnimBP = NULL;
    this->AccelerationTime = 1.00f;
    this->DecelerationTime = 1.00f;
    this->TurnLength = 1000.00f;
    this->ReDownTurnTime = 0.10f;
    this->S3701Param = NULL;
    this->S3701MissileParam = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->ShootSound = NULL;
    this->MissileSound = NULL;
    this->DeathTime = 0.50f;
    this->BFEffect = NULL;
}


