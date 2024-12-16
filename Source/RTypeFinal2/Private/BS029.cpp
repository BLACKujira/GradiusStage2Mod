#include "BS029.h"

ABS029::ABS029(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(13);
    this->PrimitiveComponentB.AddDefaulted(13);
    this->PrimitiveComponentC.AddDefaulted(13);
    this->MeshComponent.AddDefaulted(3);
    this->PlanetaryGearArray.AddDefaulted(3);
    this->bIsMapObject = true;
    this->ParamBS029 = NULL;
    this->AudioComponentMove = NULL;
}


