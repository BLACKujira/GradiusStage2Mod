#include "E1943Param.h"

UE1943Param::UE1943Param() {
    this->Life = 600;
    this->Defence = 0;
    this->Score = 400;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->BeamEffect = NULL;
    this->HitEffect = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->BeamSound = NULL;
    this->WaitBeamSETime = 1.00f;
    this->WaitDamageSETime = 0.07f;
    this->WaitDeathSETime = 0.07f;
    this->BeamSoundPlayMode = 1;
    this->BeamSoundFadeVolumeMultiplier = 0.50f;
    this->BeamSoundFadeDuration = 0.70f;
    this->GunRotateSpeed = 120.00f;
    this->ColBStartLength = 1000.00f;
    this->CoeffBeamColScale = 100.00f;
    this->MinGunRotSpeed = 1.00f;
    this->SpeedDownGunRot = 20.00f;
    this->BeamChargeTime = 1.00f;
    this->BeamThinTime = 0.30f;
    this->DistFromScreenActorXForNoAttack = 10000.00f;
    this->DistFromScreenActorXForStartBeam = 8000.00f;
    this->DeathTime = 0.50f;
}


