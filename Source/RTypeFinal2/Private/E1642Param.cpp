#include "E1642Param.h"

UE1642Param::UE1642Param() {
    this->Defence = 0;
    this->Score = 200;
    this->BaseMesh = NULL;
    this->Base_AnimBP = NULL;
    this->FlyMesh = NULL;
    this->Fly_AnimBP = NULL;
    this->S000Param = NULL;
    this->SearchStartRange = 5000.00f;
    this->SearchRotSpeed = 60.00f;
    this->FlyWaitTime = 0.50f;
    this->FlyPenetrationLife = 100.00f;
    this->BFEffect = NULL;
    this->DeathEffect = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->FlySound = NULL;
}


