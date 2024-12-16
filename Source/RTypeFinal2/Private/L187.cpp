#include "L187.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL187::AL187(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->NS_Top = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsTop"));
    this->NS_Btm = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBtm"));
    this->Env = NULL;
    this->NS_Top->SetupAttachment(RootComponent);
    this->NS_Btm->SetupAttachment(RootComponent);
}


