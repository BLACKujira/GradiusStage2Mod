#include "E7108.h"

AE7108::AE7108(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->EffectComponent.AddDefaulted(1);
    this->AudioComponent.AddDefaulted(1);
    this->BeamEff = NULL;
    this->HitEff = NULL;
    this->BeamSound = NULL;
    this->EffInterval = 0.10f;
    this->BeamWideTime = 0.10f;
    this->BeamAttackTime = 3.00f;
    this->BeamRad = 1000.00f;
    this->BeamLength = 80000.00f;
    this->BeamNoHitLength = 50000.00f;
    this->SoundFadeTime = 0.50f;
    this->EffOffset = 3000.00f;
}


