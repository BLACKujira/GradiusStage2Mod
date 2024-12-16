#include "S790H044.h"
#include "NiagaraComponent.h"

AS790H044::AS790H044(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->DataAsset = NULL;
    this->ParentEnemy = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


