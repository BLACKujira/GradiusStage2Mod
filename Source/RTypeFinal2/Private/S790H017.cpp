#include "S790H017.h"
#include "NiagaraComponent.h"

AS790H017::AS790H017(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->DataAsset = NULL;
    this->ParentEnemy = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


