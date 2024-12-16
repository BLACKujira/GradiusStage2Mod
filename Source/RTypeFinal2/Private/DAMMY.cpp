#include "DAMMY.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "NiagaraComponent.h"

ADAMMY::ADAMMY(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->SM_Body = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SmBody"));
    this->Mi_Body = NULL;
    this->EffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Effect"));
    this->SM_Body->SetupAttachment(RootComponent);
    this->EffectComponent->SetupAttachment(RootComponent);
}


