#include "BS011.h"

ABS011::ABS011(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(17);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(17);
    this->MeshComponent.AddDefaulted(3);
    this->EffectComponent.AddDefaulted(5);
    this->bIsMapObject = true;
    this->ParamBS011 = NULL;
    this->CameraShake = NULL;
}

void ABS011::DeathEventStart() {
}

void ABS011::DeathEventEnd() {
}


