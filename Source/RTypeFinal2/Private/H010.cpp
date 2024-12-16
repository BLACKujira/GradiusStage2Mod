#include "H010.h"
#include "Components/PointLightComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "NiagaraComponent.h"

AH010::AH010(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->LightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("light"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->NS_Splash = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_Splash"));
    this->NS_Body->SetupAttachment(RootComponent);
    this->LightComponent->SetupAttachment(RootComponent);
    this->Mesh->SetupAttachment(RootComponent);
    this->NS_Splash->SetupAttachment(RootComponent);
}


