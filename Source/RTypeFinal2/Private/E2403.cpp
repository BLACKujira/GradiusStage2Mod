#include "E2403.h"
#include "Components/PointLightComponent.h"

AE2403::AE2403(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(20);
    this->PrimitiveComponentB.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(13);
    this->bIsMapObject = true;
    this->ParamE2403 = NULL;
    this->LightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("light"));
    this->LightComponent->SetupAttachment(RootComponent);
}


