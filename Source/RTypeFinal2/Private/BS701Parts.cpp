#include "BS701Parts.h"

ABS701Parts::ABS701Parts(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(26);
    this->PrimitiveComponentB.AddDefaulted(26);
    this->PrimitiveComponentC.AddDefaulted(4);
    this->MeshComponent.AddDefaulted(28);
    this->EffectComponent.AddDefaulted(33);
    this->Path[0] = NULL;
    this->Path[1] = NULL;
    this->Path_Ofs[0] = NULL;
    this->Path_Ofs[1] = NULL;
}


