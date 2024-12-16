#include "W011.h"
#include "Components/PointLightComponent.h"

AW011::AW011(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("light"));
    this->LightComponent->SetupAttachment(RootComponent);
}


