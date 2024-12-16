#include "E1294Parts.h"

AE1294Parts::AE1294Parts(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->ParentE1294 = NULL;
}

void AE1294Parts::SetParentE1294(AE1294* _actor) {
}

AE1294* AE1294Parts::GetParentE1294() const {
    return NULL;
}


