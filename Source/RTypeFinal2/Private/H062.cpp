#include "H062.h"
#include "Components/PointLightComponent.h"
#include "NiagaraComponent.h"

AH062::AH062(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->LightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("light"));
    this->H062Asset = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
    this->LightComponent->SetupAttachment(RootComponent);
}


