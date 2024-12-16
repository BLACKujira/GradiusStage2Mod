#include "H001.h"
#include "Components/PointLightComponent.h"
#include "NiagaraComponent.h"

AH001::AH001(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->LightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("light"));
    this->NS_Body->SetupAttachment(RootComponent);
    this->LightComponent->SetupAttachment(RootComponent);
}


