#include "S790H018P.h"
#include "NiagaraComponent.h"

AS790H018P::AS790H018P(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->DataAsset = NULL;
    this->ParentEnemy = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


