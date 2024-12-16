#include "E3001Param.h"

UE3001Param::UE3001Param() {
    this->Defence = 0;
    this->Body_Score = 0;
    this->Pole_Score = 0;
    this->DispOutTime = 0.00f;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->PoleAnimBP = NULL;
    this->LaserEffect = NULL;
    this->WaitDamageSETime = 0.07f;
    this->SoundDamage = NULL;
    this->WaitDeathSETime = 0.10f;
    this->SoundDeath = NULL;
    this->AttackSignTime = 0.00f;
    this->AfterBodySpeed = 0.00f;
    this->DestructSignTime = 0.00f;
    this->SearchTime = 0.00f;
    this->RappidInterval = 0.00f;
    this->RotSpeed = 0.00f;
    this->ShotParam = NULL;
    this->DestructShotParam = NULL;
}


