#include "E5605Parts.h"

AE5605Parts::AE5605Parts(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->ParentE5605 = NULL;
}

void AE5605Parts::SetParentE5605(AE5605* _actor) {
}

AE5605* AE5605Parts::GetParentE5605() const {
    return NULL;
}


