#include "E006Param.h"

UE006Param::UE006Param() {
    this->Life = 1;
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->PropertyShoot = TEXT("E006_shot");
    this->PropertyDeath = TEXT("E006_death");
    this->MoveEffect = NULL;
    this->MoveSpeed = 3000.00f;
    this->MoveLength = 3000.00f;
    this->IsLookingAtPlayer = true;
    this->RotateSlerpSpeed = 3.00f;
    this->AttackParam = NULL;
    this->ShootLength = 2000.00f;
    this->ShootAngleNum = 32;
    this->SoundDeath = NULL;
}


