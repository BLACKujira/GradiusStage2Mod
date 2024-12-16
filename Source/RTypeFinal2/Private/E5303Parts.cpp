#include "E5303Parts.h"

AE5303Parts::AE5303Parts(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->ParentE5303 = NULL;
}

void AE5303Parts::SetParentE5303(AE5303* _actor) {
}

AE5303* AE5303Parts::GetParentE5303() const {
    return NULL;
}


