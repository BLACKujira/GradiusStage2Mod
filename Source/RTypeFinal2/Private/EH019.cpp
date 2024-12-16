#include "EH019.h"
#include "Components/PointLightComponent.h"
#include "NiagaraComponent.h"

AEH019::AEH019(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->LightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("light"));
    this->NS_Tip = NULL;
    this->SE_Shot = NULL;
    this->DataAsset = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
    this->LightComponent->SetupAttachment(RootComponent);
}


