#include "E3203Param.h"

UE3203Param::UE3203Param() {
    this->Defence = 0;
    this->Score = 3000;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->Body_KMesh = NULL;
    this->BodyAnimDeath = NULL;
    this->RotSpeed = 22.50f;
    this->UpDownLength = 2000.00f;
    this->ExitTime = 3.00f;
    this->HomingRotTime = 0.50f;
    this->HomingRotLimit = 20.00f;
    this->HomingShootInterval = 3.00f;
    this->HomingLength = 2000.00f;
    this->S3203Param = NULL;
    this->BFEffect = NULL;
    this->OpenSound = NULL;
    this->ShootSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->DeathTime = 2.00f;
    this->E3203_gunParam = NULL;
    this->E3203_laserParam = NULL;
    this->E3203_vernierParam = NULL;
    this->E3203_bridgeParam = NULL;
}


