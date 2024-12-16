#include "E2606.h"

AE2606::AE2606(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(8);
    this->PrimitiveComponentB.AddDefaulted(8);
    this->PrimitiveComponentC.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(2);
    this->bIsMapObject = true;
    this->EnemyParam = NULL;
    this->EnemySerialNo = 0;
}


