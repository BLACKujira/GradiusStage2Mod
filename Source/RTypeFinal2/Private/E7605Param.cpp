#include "E7605Param.h"

UE7605Param::UE7605Param() {
    this->Life = 100;
    this->Defence = 0;
    this->Score = 100;
    this->ScreenProjectionLimitDistance = 2000.00f;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->MoveSpeed = 0.00f;
    this->FallSpeed = 0.00f;
    this->ClimbAngle = 0.00f;
    this->DownAngle = 0.00f;
    this->JumpLength = 0.00f;
    this->JumpTime = 0.00f;
    this->JumpEffect = NULL;
    this->JumpEffectAttachSocketName.AddDefaulted(2);
    this->E7605SearchSocketName = TEXT("search");
    this->AttackEffect = NULL;
    this->AttackParam = NULL;
    this->DeathEffect = NULL;
    this->SoundDeath = NULL;
}


