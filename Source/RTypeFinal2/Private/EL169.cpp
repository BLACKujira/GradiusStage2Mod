#include "EL169.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AEL169::AEL169(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBody"));
    this->PartM.AddDefaulted(16);
    this->Env = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


