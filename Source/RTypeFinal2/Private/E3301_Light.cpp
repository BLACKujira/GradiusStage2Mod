#include "E3301_Light.h"
#include "ExBoxComponent.h"

AE3301_Light::AE3301_Light(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UExBoxComponent>(TEXT("CollisionC"))) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(2);
    this->ParentEnemy = NULL;
}


