#include "H039.h"
#include "Components/PointLightComponent.h"
#include "NiagaraComponent.h"

AH039::AH039(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->LightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("light"));
    this->ControlSE = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
    this->LightComponent->SetupAttachment(RootComponent);
}


