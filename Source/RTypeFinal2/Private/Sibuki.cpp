#include "Sibuki.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

ASibuki::ASibuki(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->EffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Effect"));
    this->HitEffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("HitEffect"));
    this->EffectComponent->SetupAttachment(RootComponent);
    this->HitEffectComponent->SetupAttachment(RootComponent);
}


