#include "BS505_Laserohk.h"

ABS505_Laserohk::ABS505_Laserohk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(1);
}


