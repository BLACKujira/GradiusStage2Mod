#include "E640.h"

AE640::AE640(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(13);
    this->LifeMax.AddDefaulted(13);
    this->Defence.AddDefaulted(13);
    this->Power.AddDefaulted(13);
    this->Score.AddDefaulted(13);
    this->PrimitiveComponentA.AddDefaulted(12);
    this->PrimitiveComponentB.AddDefaulted(12);
    this->PrimitiveComponentC.AddDefaulted(12);
    this->MeshComponent.AddDefaulted(13);
    this->E640Param = NULL;
    this->TableIndex = 0;
    this->RotDir = 0;
    this->RotSpeed = 0.00f;
    this->SerialNo = -1;
    this->ChildArray.AddDefaulted(12);
    this->BulletParam = NULL;
}

void AE640::Import() {
}


