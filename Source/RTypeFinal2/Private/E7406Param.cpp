#include "E7406Param.h"

UE7406Param::UE7406Param() {
    this->Defence = 0;
    this->Score = 100;
    this->MoveSpeed = 1000.00f;
    this->RotationSpeed_A = 0.00f;
    this->RotationSpeed_B = 0.00f;
    this->BodyMesh_A = NULL;
    this->BodyMesh_B = NULL;
    this->BodyAnim_A = NULL;
    this->BodyAnim_B = NULL;
    this->HitEffect = NULL;
    this->DeathEffect = NULL;
    this->SoundDeath = NULL;
    this->WaitDeathSETime = 0.00f;
}


