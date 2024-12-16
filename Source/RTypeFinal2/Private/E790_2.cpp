#include "E790_2.h"

AE790_2::AE790_2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(12);
    this->PrimitiveComponentB.AddDefaulted(11);
    this->PrimitiveComponentC.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(11);
    this->EffectComponent.AddDefaulted(10);
    this->InhaleSe = NULL;
    this->PowCountData = NULL;
    this->E711CountData = NULL;
    this->ExhaleSe[0] = NULL;
    this->ExhaleSe[1] = NULL;
    this->ExhaleSe[2] = NULL;
    this->ExhaleSe[3] = NULL;
}


