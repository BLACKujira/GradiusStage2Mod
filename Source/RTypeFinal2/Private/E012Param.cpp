#include "E012Param.h"

UE012Param::UE012Param() {
    this->BodyDefence = 0;
    this->BodyScore = 100;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->ForceDefence = 0;
    this->ForceScore = 100;
    this->ForceMesh = NULL;
    this->ForceAnimBP = NULL;
    this->ForceAttachSocketName = TEXT("Force");
    this->ForceLightUnits = ELightUnits::Candelas;
    this->ForceLightIntensity = 700.00f;
    this->ForceLightAttenuationRadius = 12000.00f;
    this->LaserParam = NULL;
    this->MissileParam = NULL;
    this->SoundBodyDamage = NULL;
    this->SoundBodyDeath = NULL;
    this->SoundForceDamage = NULL;
    this->SoundForceDeath = NULL;
    this->SoundLaserShoot = NULL;
    this->SoundMissileShoot = NULL;
    this->SoundForceShoot = NULL;
}


