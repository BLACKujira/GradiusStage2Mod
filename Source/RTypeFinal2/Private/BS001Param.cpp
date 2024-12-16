#include "BS001Param.h"

UBS001Param::UBS001Param() {
    this->Core_Defence = 0;
    this->Core_Score = 10000;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->Core_Mesh = NULL;
    this->Core_AnimBP = NULL;
    this->S006Param = NULL;
    this->S007Param = NULL;
    this->DeathAnimTime = 3.00f;
    this->Charge_Effect = NULL;
    this->Beam_Effect = NULL;
    this->Death_Effect = NULL;
    this->SoundDamageMinSpan = 1.50f;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
    this->SoundCharge = NULL;
    this->SoundBeam = NULL;
    this->SoundShoot = NULL;
    this->SoundPreShoot = NULL;
    this->SoundPreShootPlayTime = 2.30f;
    this->SoundFog = NULL;
    this->SoundFogMinInterval = 3.00f;
    this->SoundCoreOut = NULL;
    this->BeamChargeTime = 1.20f;
    this->BeamCamaraShake = NULL;
}


