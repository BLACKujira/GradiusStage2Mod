#include "E1822Param.h"

UE1822Param::UE1822Param() {
    this->Defence = 0;
    this->Score = 200;
    this->Body_Mesh = NULL;
    this->BodyAnimBP = NULL;
    this->StartTOffset = 3000.00f;
    this->TOffsetChangeSpeed = 500.00f;
    this->LeastMoveTime = 0.66f;
    this->TurnLength = 1000.00f;
    this->TurnTime = 0.33f;
    this->MoveForwardZLength = 1500.00f;
    this->S1822Param = NULL;
    this->ShootXLength = 10000.00f;
    this->ShootZLength = 300.00f;
    this->SlowingTime = 0.33f;
    this->RecoilSpeed = 1500.00f;
    this->RecoilTime = 0.66f;
    this->ShootInterval = 2.00f;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->ShootSound = NULL;
    this->DeathTime = 0.50f;
    this->BFEffect = NULL;
    this->ShotEffect = NULL;
}


