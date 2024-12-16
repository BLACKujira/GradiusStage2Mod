#include "BS030_ChildParam.h"

UBS030_ChildParam::UBS030_ChildParam() {
    this->BodyScore = 0;
    this->PoleScore = 0;
    this->BodyMesh = NULL;
    this->PoleMesh = NULL;
    this->BodyAnim = NULL;
    this->PoleAnim = NULL;
    this->GenerationEffect = NULL;
    this->ShotEffect = NULL;
    this->WaitDamageSETime = 0.07f;
    this->SoundDamage = NULL;
    this->WaitDeathSETime = 0.10f;
    this->SoundDeath = NULL;
    this->AttackSignTime = 0.00f;
    this->AfterBodySpeed = 0.00f;
    this->DestructSignTime = 0.00f;
    this->SearchTime = 0.00f;
    this->RapidInterval = 0.00f;
    this->RotSpeed = 0.00f;
    this->ShotParam = NULL;
    this->DestructShotParam = NULL;
}


