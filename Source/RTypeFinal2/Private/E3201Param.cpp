#include "E3201Param.h"

UE3201Param::UE3201Param() {
    this->Defence = 0;
    this->Score = 200;
    this->Body_Mesh = NULL;
    this->Body_Dai = NULL;
    this->Body_DaiBreak = NULL;
    this->Body_AnimBP = NULL;
    this->BodyRotTime = 2.00f;
    this->GunRotSpeed = 60.00f;
    this->GunMaxRot = 80.00f;
    this->RapidInterval = 0.30f;
    this->S3201Param = NULL;
    this->SmokeEffect = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->DeathTime = 0.50f;
}


