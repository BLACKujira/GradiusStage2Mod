#include "E1060Param.h"

UE1060Param::UE1060Param() {
    this->PillarDefence = 0;
    this->PillarScore = 500;
    this->BodyMesh = NULL;
    this->BodyAnimDamage = NULL;
    this->BodyAnimDeath = NULL;
    this->DeathSound = NULL;
    this->DeathTime = 0.50f;
    this->FallSpeed = 2000.00f;
    this->Deceleration = 980.00f;
    this->FallMinSpeed = 1000.00f;
    this->RotMaxSpeed = 60.00f;
    this->E1060BatteryParam = NULL;
}


