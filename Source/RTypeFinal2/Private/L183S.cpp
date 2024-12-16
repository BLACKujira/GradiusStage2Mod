#include "L183S.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL183S::AL183S(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->NS_Body1 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBody1"));
    this->NS_Body2 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBody2"));
    this->Env = NULL;
    this->NS_Body1->SetupAttachment(RootComponent);
    this->NS_Body2->SetupAttachment(RootComponent);
}


