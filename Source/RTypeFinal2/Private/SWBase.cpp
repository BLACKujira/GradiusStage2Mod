#include "SWBase.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

ASWBase::ASWBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsEffBody"));
    this->SequencePlayer = NULL;
    this->SequenceActor = NULL;
}


