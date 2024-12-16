#include "BS022_FighterParam.h"

UBS022_FighterParam::UBS022_FighterParam() {
    this->Defence = 0;
    this->Score = 0;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->ShotParam = NULL;
    this->RapidShootInterval = 0.00f;
    this->ShotSpeed = 0.00f;
    this->ShockWaveParam = NULL;
    this->ShockWaveChargeTime = 0.00f;
    this->ShockWaveSpeed = 0.00f;
    this->EffectShot = NULL;
    this->EffectCharge = NULL;
    this->EffectShockWave = NULL;
    this->SoundShot = NULL;
    this->SoundCharge = NULL;
    this->SoundShockWave = NULL;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
    this->DeathTime = 0.00f;
    this->TurnTime = 0.00f;
    this->TurnTime_StartDelay = 0.00f;
    this->DoInsertTurnTime_BeforeAttackStart = false;
}


