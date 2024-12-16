#include "E7502Param.h"

UE7502Param::UE7502Param() {
    this->Defence = 0;
    this->Score = 10000;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->RotateAng = 45.00f;
    this->EntryTime = 5.00f;
    this->AttackWaitTime = 3.00f;
    this->RapidNum = 4;
    this->ShootSpeed = 2000.00f;
    this->RapidInterval = 0.50f;
    this->ShootInterval = 2.00f;
    this->E7502_gunParam = NULL;
    this->GunSpawnTime = 2.00f;
    this->GunLife = 300;
    this->GunRespawnTime = 3.00f;
    this->BleedEffect = NULL;
    this->IdleSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->ShootSound = NULL;
    this->ShotSoundLimit = 0.10f;
    this->DeathTime = 4.00f;
    this->E7502_meatParam = NULL;
}


