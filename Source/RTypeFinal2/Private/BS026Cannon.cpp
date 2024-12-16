#include "BS026Cannon.h"

ABS026Cannon::ABS026Cannon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(2);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(2);
    this->EffectComponent.AddDefaulted(3);
    this->bIsMapObject = false;
    this->ParamBS026Cannon = NULL;
    this->Serial = 0;
    this->FirstShootDelay = 0.00f;
    this->ArmAngleRangeMin = 0.00f;
    this->ArmAngleRangeMax = 0.00f;
    this->AngleRangeMin = 0.00f;
    this->AngleRangeMax = 0.00f;
}


