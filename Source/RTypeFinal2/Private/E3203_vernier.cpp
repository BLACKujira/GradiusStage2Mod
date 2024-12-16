#include "E3203_vernier.h"

AE3203_vernier::AE3203_vernier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(1);
    this->ParentActor = NULL;
    this->AudioComponentBig = NULL;
}


