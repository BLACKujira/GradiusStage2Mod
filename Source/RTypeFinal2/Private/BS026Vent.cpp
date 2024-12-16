#include "BS026Vent.h"

ABS026Vent::ABS026Vent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(2);
    this->EffectComponent.AddDefaulted(2);
    this->bIsMapObject = false;
    this->ParamBS026Vent = NULL;
    this->Serial = 0;
    this->MoveRange = 0.00f;
    this->MoveStartDir = 0;
    this->MoveSpeed = 0.00f;
    this->FirstVentTime = 0.00f;
    this->VentRange = 0.00f;
}


