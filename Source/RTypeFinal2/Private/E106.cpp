#include "E106.h"

AE106::AE106(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(9);
    this->PrimitiveComponentB.AddDefaulted(9);
    this->MeshComponent.AddDefaulted(12);
    this->MaskActor = NULL;
}

void AE106::ScatterCallback(FEnemyExplosionScatterEventParam& _event) {
}


