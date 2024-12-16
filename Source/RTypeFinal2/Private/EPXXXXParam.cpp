#include "EPXXXXParam.h"

UEPXXXXParam::UEPXXXXParam() {
    this->BodyDefence = 0;
    this->BodyScore = 0;
    this->BodyAsset = NULL;
    this->BodyEffectAsset = NULL;
    this->BodyDeathSound = NULL;
    this->ForceClassActor = NULL;
    this->ForceAsset = NULL;
    this->ForceNoDamageSound = NULL;
    this->ForceForceshootSpeed = 0.00f;
    this->ForceRearRevOfs[0] = 0.00f;
    this->ForceRearRevOfs[1] = 0.00f;
    this->ForceRearRevOfs[2] = 0.00f;
    this->ForceForceshootEffect = NULL;
    this->SpeedForCall_Near = 3000.00f;
    this->SpeedForCall_Far = 6000.00f;
    this->FloatSpeed = 3000.00f;
    this->LaserAssetR = NULL;
    this->LaserEnvR = NULL;
    this->LaserAssetB = NULL;
    this->LaserEnvB = NULL;
    this->LaserAssetY = NULL;
    this->LaserEnvY = NULL;
    this->MissileAsset = NULL;
    this->MissileEnv = NULL;
    this->MissileIntervalTime = 0.17f;
    this->bShockwaveHybrid = false;
    this->ShockwaveAsset = NULL;
    this->ShockwaveAsset2 = NULL;
    this->WShotAsset = NULL;
    this->WShotEnv = NULL;
    this->ForceWShotEnv = NULL;
    this->WShotIntervalTime = 0.10f;
    this->SoundVolume = 0.70f;
    this->SoundVolumeLaser = 0.70f;
    this->SoundVolumeLaserShot = 0.50f;
}


