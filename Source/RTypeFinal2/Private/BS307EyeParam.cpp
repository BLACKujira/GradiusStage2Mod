#include "BS307EyeParam.h"

UBS307EyeParam::UBS307EyeParam() {
    this->Defence = 0;
    this->Score = 500;
    this->BodyMesh[0] = NULL;
    this->BodyMesh[1] = NULL;
    this->BodyMesh[2] = NULL;
    this->BodyMesh[3] = NULL;
    this->AnimBP[0] = NULL;
    this->AnimBP[1] = NULL;
    this->AnimBP[2] = NULL;
    this->AnimBP[3] = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->BulletParam = NULL;
    this->ShootSignTime = 0.50f;
}


