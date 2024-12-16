#include "BS705_CapsuleParam.h"

UBS705_CapsuleParam::UBS705_CapsuleParam() {
    this->Defence = 0;
    this->Score = 10000;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->EffectShot = NULL;
    this->EffectDamageSmoke = NULL;
    this->SoundCapsuleOff = NULL;
    this->SoundShot = NULL;
    this->SoundDamage = NULL;
    this->SoundNoDamage = NULL;
    this->SoundDeath = NULL;
    this->WaitSETime_Damage = 0.07f;
    this->WaitSETime_NoDamage = 0.07f;
    this->HeadCapsuleStartTime = 5.00f;
    this->CapsuleBulletParam = NULL;
    this->TransTime = 1.00f;
    this->CollisionActivateTimer = 2.00f;
    this->Phase3KeepTime = 120.00f;
    this->CapsuleRail = NULL;
    this->CapsuleSpeed1 = 2000.00f;
    this->CapsuleSpeed2 = 4000.00f;
    this->CapsuleSpeedTransTime1 = 1.00f;
    this->CapsuleSpeedTransTime2 = 1.00f;
    this->CapsuleAttackStartTime = 5.00f;
    this->DeathTime = 1.50f;
}


