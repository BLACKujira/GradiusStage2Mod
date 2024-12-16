#include "E541Param.h"

UE541Param::UE541Param() {
    this->Defence = 0;
    this->Score = 500;
    this->BoundBoxExpandValue = -100.00f;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->NormalVelocity = 0.00f;
    this->RapidVelocity = 0.00f;
    this->RapidTime = 0.00f;
    this->RapidRotateSpeed = 180.00f;
    this->RapidEffect = NULL;
    this->BoundEffect = NULL;
    this->StopFriction = 0.00f;
    this->MinStopVelocity = 0.00f;
    this->BoundStopTime = 0.10f;
    this->MoveDirUnitAngle = 30.00f;
    this->ReflectNormalUnitAngle = 15.00f;
    this->SoundDeath = NULL;
    this->SoundDamage = NULL;
    this->SoundBound = NULL;
}


