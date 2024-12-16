#include "B003.h"
#include "NiagaraComponent.h"

AB003::AB003(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DataAsset = NULL;
    this->NS_Base = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBase"));
    this->Mi_Body = NULL;
    this->SearchedActor = NULL;
    this->SearchedComponent = NULL;
    this->NS_Base->SetupAttachment(body);
}


