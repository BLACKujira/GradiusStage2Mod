#include "H004.h"
#include "Components/CapsuleComponent.h"
#include "Components/PointLightComponent.h"
#include "NiagaraComponent.h"

AH004::AH004(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Collision_A = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_A"));
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->LightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("light"));
    this->Collision_A->SetupAttachment(RootComponent);
    this->NS_Body->SetupAttachment(RootComponent);
    this->LightComponent->SetupAttachment(RootComponent);
}


