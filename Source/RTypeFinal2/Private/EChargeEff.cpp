#include "EChargeEff.h"
#include "Components/PointLightComponent.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AEChargeEff::AEChargeEff(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->NS_EffBodyA = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsEffBodyA"));
    this->NS_EffBodyB = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsEffBodyB"));
    this->LightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("light"));
    this->NS_EffBodyA->SetupAttachment(RootComponent);
    this->NS_EffBodyB->SetupAttachment(RootComponent);
    this->LightComponent->SetupAttachment(RootComponent);
}


