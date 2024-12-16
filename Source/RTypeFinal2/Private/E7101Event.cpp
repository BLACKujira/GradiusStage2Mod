#include "E7101Event.h"

AE7101Event::AE7101Event(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->E7101Serial = 0;
    this->ChangeTime = 0.50f;
    this->BreakSound = NULL;
}




