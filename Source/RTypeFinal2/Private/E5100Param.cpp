#include "E5100Param.h"

UE5100Param::UE5100Param() {
    this->Life = 0;
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->MoveEffectFly = NULL;
    this->MoveEffectWater = NULL;
    this->WaterEffect = NULL;
    this->FireEffectFly = NULL;
    this->FireEffectWater = NULL;
    this->DeathEffectFly = NULL;
    this->DeathEffectWater = NULL;
    this->NormalVelocity = 0;
    this->ChangeDirection = 0;
    this->ChangeDirTime = 0.00f;
    this->DamageEffInterval = 0.00f;
    this->SEFadeTime = 0.50f;
    this->SoundWater = NULL;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
}


