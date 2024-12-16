#include "BS001_2Param.h"

UBS001_2Param::UBS001_2Param() {
    this->Core_Defence = 0;
    this->Core_Score = 20000;
    this->DeathAnimTime = 3.00f;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->Core_Mesh = NULL;
    this->Core_AnimBP = NULL;
    this->Crystal_Mesh = NULL;
    this->Crystal_Death_Mesh = NULL;
    this->Crystal_Death_Anim = NULL;
    this->Charge_Effect = NULL;
    this->Beam_Effect = NULL;
    this->Shoot_Effect = NULL;
    this->Death_Effect = NULL;
    this->Damage_Effect = NULL;
    this->BeamCamaraShake = NULL;
    this->SoundDamageMinSpan = 1.50f;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
    this->SoundCharge = NULL;
    this->SoundBeam = NULL;
    this->SoundShoot = NULL;
    this->SoundFog = NULL;
    this->SoundFogMinInterval = 3.00f;
    this->SoundCoreOut = NULL;
    this->BeamChargeTime = 4.00f;
    this->ShootParam = NULL;
    this->ShootPhaseChangePercent = 50;
    this->ShootKeepTime = 2.00f;
    this->ShootFirstTime = 4.00f;
    this->BeamToShootTime = 3.00f;
}


