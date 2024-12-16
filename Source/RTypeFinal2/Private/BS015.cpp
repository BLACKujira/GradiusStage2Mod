#include "BS015.h"

ABS015::ABS015(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(14);
    this->PrimitiveComponentB.AddDefaulted(14);
    this->MeshComponent.AddDefaulted(6);
    this->EffectComponent.AddDefaulted(17);
    this->bIsMapObject = true;
    this->ParamBS015 = NULL;
    this->StaticMeshComponent.AddDefaulted(1);
    this->CoverLightComponent.AddDefaulted(4);
    this->ShotLightComponent.AddDefaulted(4);
}


