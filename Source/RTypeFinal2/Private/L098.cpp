#include "L098.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL098::AL098(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBody"));
    this->TipM.AddDefaulted(64);
    this->Env = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


