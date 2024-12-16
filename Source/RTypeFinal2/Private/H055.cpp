#include "H055.h"
#include "Components/PointLightComponent.h"
#include "NiagaraComponent.h"

AH055::AH055(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("light"));
    this->NS_Bodies.AddDefaulted(64);
    this->NS_Tip = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsTip"));
    this->NS_Fire = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsFire"));
    this->SE_Shot = NULL;
    this->DataAsset = NULL;
    this->LightComponent->SetupAttachment(RootComponent);
    this->NS_Tip->SetupAttachment(RootComponent);
    this->NS_Fire->SetupAttachment(RootComponent);
}


