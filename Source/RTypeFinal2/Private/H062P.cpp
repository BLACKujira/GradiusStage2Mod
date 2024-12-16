#include "H062P.h"
#include "NiagaraComponent.h"

AH062P::AH062P(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->H062Asset = NULL;
    this->SearchedActor = NULL;
    this->SearchedComponent = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


