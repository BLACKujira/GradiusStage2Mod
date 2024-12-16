#include "BS003.h"

ABS003::ABS003(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(10);
    this->bIsMapObject = true;
    this->ParamBS003 = NULL;
    this->BS003_2Actor = NULL;
    this->ParentActor = NULL;
    this->AudioComponentMove = NULL;
    this->AudioComponentDamage = NULL;
    this->CameraShake = NULL;
}


