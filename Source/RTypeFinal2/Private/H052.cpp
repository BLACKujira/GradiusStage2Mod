#include "H052.h"
#include "Components/PointLightComponent.h"
#include "NiagaraComponent.h"

AH052::AH052(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->LightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("light"));
    this->NS_Cartridge = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsCartridge"));
    this->NS_Body->SetupAttachment(RootComponent);
    this->LightComponent->SetupAttachment(RootComponent);
    this->NS_Cartridge->SetupAttachment(RootComponent);
}


