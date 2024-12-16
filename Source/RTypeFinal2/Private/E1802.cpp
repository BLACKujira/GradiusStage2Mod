#include "E1802.h"

AE1802::AE1802(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(1);
    this->E1802Param = NULL;
    this->TopPartsActor = NULL;
    this->BottomPartsActor = NULL;
    this->TopPartsState = EE1802_PARTS_STATE::OPEN;
    this->BottomPartsState = EE1802_PARTS_STATE::OPEN;
}


