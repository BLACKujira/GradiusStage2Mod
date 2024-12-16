#include "H018P.h"
#include "NiagaraComponent.h"

AH018P::AH018P(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->NS_Body->SetupAttachment(RootComponent);
}


