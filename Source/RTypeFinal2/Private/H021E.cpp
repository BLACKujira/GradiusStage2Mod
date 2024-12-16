#include "H021E.h"
#include "NiagaraComponent.h"

AH021E::AH021E(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->NS_Body->SetupAttachment(RootComponent);
}


