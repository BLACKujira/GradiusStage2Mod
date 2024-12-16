#include "E7706Param.h"

UE7706Param::UE7706Param() {
    this->Life = 1;
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->EffectShot = NULL;
    this->EffectVernier = NULL;
    this->SoundDeath = NULL;
    this->S000Param = NULL;
    this->MoveSpeed = 2000.00f;
    this->MoveLength = 3000.00f;
    this->GunRotSpeed = 90.00f;
    this->NoAttackDistance = 3000.00f;
    this->SearchInterval = 0.50f;
    this->VernierMoveEffectBorderSpeed = 0.00f;
    this->DeactiveEachHitWhenExitMoving = false;
    this->DeathTime = 2.00f;
}


