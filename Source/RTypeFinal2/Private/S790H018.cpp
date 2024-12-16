#include "S790H018.h"
#include "NiagaraComponent.h"

AS790H018::AS790H018(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->DataAsset = NULL;
    this->ParentEnemy = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


