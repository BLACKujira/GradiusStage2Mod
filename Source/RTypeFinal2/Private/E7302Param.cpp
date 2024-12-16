#include "E7302Param.h"

UE7302Param::UE7302Param() {
    this->Life = 1;
    this->PowerUpLife = 0;
    this->Defence = 0;
    this->Score = 0;
    this->BodyMesh = NULL;
    this->SPBodyMesh = NULL;
    this->AnimBP = NULL;
    this->PreyEffect = NULL;
    this->UnionEffect = NULL;
    this->WaitDeathSETime = 0.10f;
    this->SoundDeath = NULL;
    this->BoundsScale = 0.00f;
    this->DispOutTime = 0.00f;
}


