#include "E100Param.h"

UE100Param::UE100Param() {
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->MoveLineAX = 0.00f;
    this->MoveLineBX = 0.00f;
    this->MoveSpeedV = 0.00f;
    this->MoveSpeedH = 0.00f;
    this->MoveEffect1 = NULL;
    this->MoveEffect2 = NULL;
    this->AttackAreaOffsetUp = 0.00f;
    this->AttackAreaOffsetDown = 0.00f;
    this->ChargeTime = 0.00f;
    this->ChargeEffect = NULL;
    this->AttackParam = NULL;
    this->SoundCharge = NULL;
    this->SoundShoot = NULL;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
    this->SliceMesh = NULL;
    this->SliceCapMaterial = NULL;
    this->SliceMoveSpeed = 0.00f;
    this->SliceRotateSpeed = 0.00f;
    this->SliceExplosionWaitTime = 0.00f;
    this->SliceExplosionDelayTime = 0.00f;
    this->SliceDistance = 0.00f;
    this->DamageActionStartDamageValue = 0.00f;
}


