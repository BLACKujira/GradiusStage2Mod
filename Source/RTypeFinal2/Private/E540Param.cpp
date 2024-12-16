#include "E540Param.h"

UE540Param::UE540Param() {
    this->Defence = 0;
    this->Score = 500;
    this->NormalMesh = NULL;
    this->ExpandMesh = NULL;
    this->NormalAnimBP = NULL;
    this->ExpandAnimBP = NULL;
    this->ChangeEffect = NULL;
    this->NormalMinRadius = 0.00f;
    this->NormalMaxRadius = 0.00f;
    this->ExpandAttackRadius = 0.00f;
    this->ExpandBodyRadius = 0.00f;
    this->ExpandCollideRadius = 0.00f;
    this->ExpandForceCollideRadius = 0.00f;
    this->NormalVelocity = 0.00f;
    this->DamagedStopTime = 0.00f;
    this->PushedVelocity = 0.00f;
    this->ExpandFriction = 0.00f;
    this->ExpandRotateSpeedMax = 100.00f;
    this->ExpandRotateSpeedMin = 40.00f;
    this->ExpandRotateChangeTime = 2.00f;
    this->ToExpandChangeTime = 0.00f;
    this->ToExpandScaleCurve = NULL;
    this->ToNormalChangeTime = 0.00f;
    this->ToNormalScaleCurve = NULL;
    this->IsConnect = false;
    this->SoundDeath = NULL;
    this->SoundDamage = NULL;
    this->SoundExpand = NULL;
    this->DamageEffect = NULL;
}


