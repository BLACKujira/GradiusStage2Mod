#include "E7703Param.h"

UE7703Param::UE7703Param() {
    this->Defence = 0;
    this->Score = 0;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->ChargeEffect = NULL;
    this->FinishEffect = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->ChargeSound = NULL;
    this->ShotSound = NULL;
    this->WaitDamageSoundTime = 0.00f;
    this->WaitDeathSoundTime = 0.00f;
    this->WaitChargeSoundTime = 0.00f;
    this->WaitShotSoundTime = 0.00f;
    this->ChargeFadeOutTime = 0.00f;
    this->ChargeFadeInTime = 0.00f;
    this->DeathTime = 0.00f;
    this->BulletParam = NULL;
    this->MoveSpeed = 0.00f;
    this->RotSpeed = 0.00f;
    this->DispOutTime = 0.00f;
    this->DebugFlag = false;
    this->DebugFlag2 = false;
}


