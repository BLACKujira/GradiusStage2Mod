#include "E7109Buil.h"

AE7109Buil::AE7109Buil(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentC.AddDefaulted(5);
    this->EffectComponent.AddDefaulted(5);
    this->HitEff = NULL;
    this->DeathTime = 1.00f;
    this->DeathEffTime = 2.00f;
    this->BreakSound = NULL;
}












