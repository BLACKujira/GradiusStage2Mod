#include "E2201.h"
#include "Components/PointLightComponent.h"
#include "Components/SpotLightComponent.h"

AE2201::AE2201(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(3);
    this->PrimitiveComponentB.AddDefaulted(2);
    this->PrimitiveComponentC.AddDefaulted(4);
    this->MeshComponent.AddDefaulted(10);
    this->EffectComponent.AddDefaulted(2);
    this->AudioComponentSign = NULL;
    this->PointLightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
    this->SpotLightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight"));
    this->StaticMeshComponent.AddDefaulted(1);
}


