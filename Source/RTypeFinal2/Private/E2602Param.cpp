#include "E2602Param.h"

UE2602Param::UE2602Param() {
    this->Defence = 0;
    this->Score = 200;
    this->Body_Mesh = NULL;
    this->Body_Break = NULL;
    this->Body_AnimBP = NULL;
    this->BodyRotTime = 2.00f;
    this->StartGunAngle = 0.00f;
    this->GunRotSpeed = 60.00f;
    this->RapidInterval = 0.30f;
    this->S2602Param = NULL;
    this->SmokeEffect = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->DeathTime = 0.50f;
    this->TurretRotateSpeed = 0.00f;
    this->FireInterval = 0.00f;
    this->MissileStraightTime = 0.00f;
    this->MissileSearchTime = 0.00f;
    this->MissileParam = NULL;
    this->HouseTime = 1.00f;
}


