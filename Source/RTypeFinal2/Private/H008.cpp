#include "H008.h"
#include "Components/PointLightComponent.h"
#include "NiagaraComponent.h"

AH008::AH008(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->LightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("light"));
    this->NS_Tip = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsTip"));
    this->SE_Shot = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
    this->LightComponent->SetupAttachment(RootComponent);
    this->NS_Tip->SetupAttachment(RootComponent);
}


