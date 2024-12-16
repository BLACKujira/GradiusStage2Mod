#include "E7205Param.h"

UE7205Param::UE7205Param() {
    this->Score = 500;
    this->Defence = 0;
    this->ShaftRot = -45.00f;
    this->RotSpeed = 120.00f;
    this->ExplosionRad = 3000.00f;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->EffectExplosion = NULL;
    this->DeathSound = NULL;
    this->DamageSound = NULL;
    this->DeathTime = 0.50f;
    this->DeathSoundWaitTime = 0.10f;
    this->DamageSoundWaitTime = 0.10f;
}


