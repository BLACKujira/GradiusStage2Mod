#include "E3610Param.h"

UE3610Param::UE3610Param() {
    this->Defence = 0;
    this->Score = 800;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->BulletFireEffect = NULL;
    this->VernierSignEffect = NULL;
    this->VernierEffect = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->BulletSound = NULL;
    this->VernierSound = NULL;
    this->PathDataAsset = NULL;
    this->BulletParam = NULL;
    this->VernierMaxLength = 9000.00f;
    this->VernierSignTime = 1.00f;
    this->VernierStartTime = 0.50f;
    this->VernierEndTime = 0.50f;
    this->SinkSpeed = 1000.00f;
    this->SinkMaxSpeed = 2000.00f;
    this->SinkAcceleration = 500.00f;
    this->LandHitEffectParam = NULL;
}


