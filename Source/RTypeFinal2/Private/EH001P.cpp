#include "EH001P.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AEH001P::AEH001P(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MountRoot"));
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->MountRoot = (USceneComponent*)RootComponent;
    this->nowRoot = NULL;
    this->NS_Body->SetupAttachment(RootNode);
}


