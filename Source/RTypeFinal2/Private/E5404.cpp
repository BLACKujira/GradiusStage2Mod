#include "E5404.h"

AE5404::AE5404(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(6);
    this->PrimitiveComponentB.AddDefaulted(6);
    this->PrimitiveComponentC.AddDefaulted(6);
    this->MeshComponent.AddDefaulted(2);
    this->EffectComponent.AddDefaulted(5);
    this->AudioComponentLaserSign = NULL;
    this->AudioComponentLaserShoot = NULL;
    this->AudioComponentVernier = NULL;
}


