#include "BS026.h"

ABS026::ABS026(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(2);
    this->EffectComponent.AddDefaulted(2);
    this->bIsMapObject = false;
    this->ParamBS026 = NULL;
    this->Serial = 0;
    this->LeftCannon = NULL;
    this->RightCannon = NULL;
    this->Vent1 = NULL;
    this->Vent2 = NULL;
}


