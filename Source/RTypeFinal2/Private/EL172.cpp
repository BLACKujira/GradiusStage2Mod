#include "EL172.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AEL172::AEL172(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBody"));
    this->PartM.AddDefaulted(96);
    this->Env = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


