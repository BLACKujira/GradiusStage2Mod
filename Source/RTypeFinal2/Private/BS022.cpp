#include "BS022.h"
#include "Components/SpotLightComponent.h"
#include "EnemyPathPlayerComponent.h"

ABS022::ABS022(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(10);
    this->PrimitiveComponentB.AddDefaulted(7);
    this->PrimitiveComponentC.AddDefaulted(7);
    this->MeshComponent.AddDefaulted(1);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->EffectComponent.AddDefaulted(7);
    this->bIsMapObject = true;
    this->ParamBS022 = NULL;
    this->NowSplineComponent = NULL;
    this->BodyLightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("BodyLight"));
}


