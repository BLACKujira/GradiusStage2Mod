#include "BS507.h"

ABS507::ABS507(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(18);
    this->PrimitiveComponentB.AddDefaulted(11);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(67);
    this->EffectComponent.AddDefaulted(28);
    this->AudioComponent.AddDefaulted(2);
    this->bIsMapObject = true;
    this->ParamBS507 = NULL;
    this->E5720Param = NULL;
    this->BS507_BreatheParam = NULL;
    this->BS507_FluidParam = NULL;
    this->BS507_BS501Param = NULL;
    this->AudioComponentBarakus = NULL;
    this->CameraShake = NULL;
}


