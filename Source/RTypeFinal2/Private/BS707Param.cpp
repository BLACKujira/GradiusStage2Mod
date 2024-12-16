#include "BS707Param.h"

UBS707Param::UBS707Param() {
    this->Defence = 0;
    this->Score = 70000;
    this->MeshBody = NULL;
    this->AnimBPBody = NULL;
    this->EffectDamageSmoke = NULL;
    this->EffectAuraOFX6 = NULL;
    this->EffectAuraBoss = NULL;
    this->EffectLightning = NULL;
    this->EffectDeath001 = NULL;
    this->EffectDeath002 = NULL;
    this->SoundBGM_1 = NULL;
    this->SoundBGM_2 = NULL;
    this->SoundBGM_3 = NULL;
    this->BGMFadeOutDuration = 1.00f;
    this->BGM1_PlayTime = 3.00f;
    this->BGM2_PlayTime = 2.50f;
    this->BGM3_PlayTime = 2.00f;
    this->SoundLightning = NULL;
    this->SoundDamage = NULL;
    this->WaitSETime_Damage = 0.07f;
    this->SoundDeath = NULL;
    this->SoundDeathExplosion = NULL;
    this->SoundDeathExplosion_StartDelay = 0.50f;
    this->SoundDeathFireLoop = NULL;
    this->SoundDeathFireLoop_StartFadeOut = 19.00f;
    this->SoundDeathFireLoop_FadeDuration = 2.00f;
    this->ParamBS707Tractor = NULL;
    this->ParamBS707Bullet = NULL;
    this->TimeOutTime = 180.00f;
    this->BreakLifeRatio1 = 50.00f;
    this->BreakLifeRatio2 = 25.00f;
    this->BulletRankThreshold2 = 1200.00f;
    this->BulletRankThreshold3 = 2400.00f;
    this->BulletRankThreshold4 = 3600.00f;
    this->BulletRankThreshold5 = 4800.00f;
    this->EnableRapidConterAttackTime = 1.00f;
    this->DeathTime = 20.00f;
}


