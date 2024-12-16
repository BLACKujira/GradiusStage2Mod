#include "BS016Param.h"

UBS016Param::UBS016Param() {
    this->Defence = 0;
    this->Score = 40000;
    this->BodyMesh = NULL;
    this->FinalCycleMI = NULL;
    this->BodyAnimBP = NULL;
    this->CoreMesh = NULL;
    this->CoreAnimBP = NULL;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
    this->FinalCycleEffect = NULL;
    this->StartMotionTime = 0.00f;
    this->FinalTransformTime = 0.00f;
    this->DeathAnimTime = 0.00f;
    this->MoveLimit[0] = 0.00f;
    this->MoveLimit[1] = 0.00f;
    this->SpeedCycle = 0.00f;
    this->AccelRate = 0.00f;
    this->MinSpeed = 0.00f;
    this->ParamCroc = NULL;
    this->ParamBug = NULL;
    this->ParamBird = NULL;
    this->ParamFish = NULL;
    this->UpperTimeupPath = NULL;
    this->LowerTimeupPath = NULL;
}


