#include "BS013.h"
#include "EnemyPathPlayerComponent.h"

ABS013::ABS013(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(20);
    this->PrimitiveComponentB.AddDefaulted(17);
    this->MeshComponent.AddDefaulted(2);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->EffectComponent.AddDefaulted(21);
    this->CameraShake = NULL;
    this->AudioJet = NULL;
}


