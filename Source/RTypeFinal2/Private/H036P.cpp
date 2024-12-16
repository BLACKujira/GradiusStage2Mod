#include "H036P.h"
#include "NiagaraComponent.h"

AH036P::AH036P(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->NS_Body->SetupAttachment(RootComponent);
}


