#include "E5406Param.h"

UE5406Param::UE5406Param() {
    this->Body_Defence = 0;
    this->Body_Score = 1000;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->BodyAngle = 0.00f;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->ShotSound = NULL;
    this->LowBodyAngle = 0.00f;
    this->UpperRotSpeed = 0.00f;
    this->LegRotSpeed = 0.00f;
    this->StartWaistAngle = 0.00f;
    this->DeathTime = 1.50f;
    this->DispOutTime = 0.00f;
    this->PodTime = 0.00f;
    this->MissileParam = NULL;
    this->DeathEffect = NULL;
    this->ShotEffect = NULL;
    this->HobberEffect = NULL;
    this->HobberFlag = false;
    this->ForwardHobberOff = false;
}


