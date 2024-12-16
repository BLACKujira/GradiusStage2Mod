#include "E3630Param.h"

UE3630Param::UE3630Param() {
    this->Defence = 0;
    this->Score = 600;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->PathDataAsset = NULL;
    this->E3611Param = NULL;
    this->E3611Locations.AddDefaulted(2);
    this->E3611Rotators.AddDefaulted(2);
    this->SinkSpeed = 1000.00f;
    this->SinkMaxSpeed = 2000.00f;
    this->SinkAcceleration = 500.00f;
    this->LandHitEffectParam = NULL;
}


