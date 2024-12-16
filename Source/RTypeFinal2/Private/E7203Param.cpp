#include "E7203Param.h"

UE7203Param::UE7203Param() {
    this->Defence = 0;
    this->Score = 3000;
    this->PartsScore = 500;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->FrontMesh = NULL;
    this->FrontAnimBP = NULL;
    this->BackMesh = NULL;
    this->BackAnimBP = NULL;
    this->HatchMesh = NULL;
    this->HatchAnimBP = NULL;
    this->BodyBFEffect = NULL;
    this->PortBFEffect = NULL;
    this->BFEffectScrewRate = 1.00f;
    this->BFEffectTorpedoPortRate = 5.00f;
    this->BFEffectTorpedoPortLife = 1.00f;
    this->BFEffectMissilePortRate = 5.00f;
    this->BFEffectMissilePortLife = 1.00f;
    this->BFEffectHatchRate = 5.00f;
    this->BFEffectHatchLife = 1.00f;
    this->S7203TorpedoParam = NULL;
    this->S7203MissileParam = NULL;
    this->MoveSpeed = 500.00f;
    this->TrpdPortRotTime = 1.00f;
    this->TrpdRapidShotInterval = 0.40f;
    this->TrpdStraightMoveTime = 1.00f;
    this->TrpdRotTime = 0.50f;
    this->TrpdOffsetHightToPlayer = 2000.00f;
    this->MsilPortOpClTime = 0.50f;
    this->MsilPortOpInterval = 0.50f;
    this->MsilStraightMoveLength = 3000.00f;
    this->MsilSearchInterval = 0.50f;
    this->HatchOpClTime = 1.00f;
    this->TrpdAndMissileSpeedY = -100.00f;
    this->TopredoStraightAreaZ = 2000.00f;
    this->ShotSound = NULL;
    this->HatchSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->DeathSoundParts = NULL;
    this->DeathTime = 3.00f;
}


