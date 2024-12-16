#include "BS307TentacleParam.h"

UBS307TentacleParam::UBS307TentacleParam() {
    this->Defence = 0;
    this->Score = 500;
    this->CheckHitBulletSpan = 1;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->Recover_Effect = NULL;
    this->RecoverToGrowthTime = 0.50f;
    this->GermSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
}


