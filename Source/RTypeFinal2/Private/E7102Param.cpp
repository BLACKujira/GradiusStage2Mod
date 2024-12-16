#include "E7102Param.h"

UE7102Param::UE7102Param() {
    this->Defence = 0;
    this->Score = 0;
    this->DeathTime = 0.00f;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->ShotEffect = NULL;
    this->FireEffect = NULL;
    this->SandSmokeEffect = NULL;
    this->ShotSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->WaitShotSoundTime = 0.00f;
    this->WaitDamageSoundTime = 0.00f;
    this->WaitDeathSoundTime = 0.00f;
    this->MissileParam = NULL;
    this->MoveSpeed = 0.00f;
    this->MoveUpSpeed = 0.00f;
    this->WheelSpeed = 0.00f;
    this->UpCheckLength = 0.00f;
    this->ForwardCheckLength = 0.00f;
    this->DownCheckLength = 0.00f;
    this->FallSpeed = 0.00f;
    this->RotateSlerpTime = 0.00f;
}


