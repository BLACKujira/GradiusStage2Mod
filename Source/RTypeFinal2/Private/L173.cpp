#include "L173.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL173::AL173(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBody"));
    this->PartM.AddDefaulted(12);
    this->Env = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


