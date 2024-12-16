#include "E3600DripEffect.h"

AE3600DripEffect::AE3600DripEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->EffectComponent.AddDefaulted(1);
    this->EnemyCollision = NULL;
}


