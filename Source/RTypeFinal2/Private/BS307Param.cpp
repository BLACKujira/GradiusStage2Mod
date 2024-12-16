#include "BS307Param.h"

UBS307Param::UBS307Param() {
    this->Core_Defence = 0;
    this->Core_Score = 5000;
    this->TotalBattleTime = 170.00f;
    this->DeathAnimTime = 3.00f;
    this->ExplosionEffectTime = 25.00f;
    this->ExplosionSoundTime = 12.00f;
    this->ExplosionSoundIntervalMin = 0.50f;
    this->ExplosionSoundIntervalMax = 2.00f;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->Core_Mesh = NULL;
    this->Core_AnimBP = NULL;
    this->Charge_Effect = NULL;
    this->Beam_Effect = NULL;
    this->Death_Effect = NULL;
    this->Damage_Effect = NULL;
    this->BeamCamaraShake = NULL;
    this->SoundDamageMinSpan = 1.50f;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
    this->SoundCharge = NULL;
    this->SoundBeam = NULL;
    this->SoundFog = NULL;
    this->SoundFogMinInterval = 3.00f;
    this->SoundCoreOut = NULL;
    this->SoundExplosion = NULL;
    this->BeamChargeTime = 4.00f;
    this->EyeParam = NULL;
    this->SporeParam = NULL;
    this->TentacleParam = NULL;
    this->MushroomKillLifePercent.AddDefaulted(3);
}


