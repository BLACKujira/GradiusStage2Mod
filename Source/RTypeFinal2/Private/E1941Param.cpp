#include "E1941Param.h"

UE1941Param::UE1941Param() {
    this->Life = 800;
    this->Defence = 0;
    this->Score = 200;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->MoveVelocity = 3000.00f;
    this->RotateSpeed = 90.00f;
    this->CorScaleFloat = 1.01f;
    this->WaitDamageSETime = 0.07f;
    this->WaitDeathSETime = 0.10f;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
}


