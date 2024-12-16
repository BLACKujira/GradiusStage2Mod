#include "E3714.h"

AE3714::AE3714(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(5);
    this->PrimitiveComponentB.AddDefaulted(5);
    this->PrimitiveComponentC.AddDefaulted(5);
    this->MeshComponent.AddDefaulted(1);
}


