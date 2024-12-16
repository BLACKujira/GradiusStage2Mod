#include "L040.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"

AL040::AL040(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->STM_Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("STMBody"));
    this->NS_FireUp = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NSFireUp"));
    this->NS_FireDown = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NSFireDown"));
    this->Env = NULL;
    this->ShotAudio = NULL;
    this->RollAudio = NULL;
    this->NS_FireUp->SetupAttachment(STM_Body);
    this->NS_FireDown->SetupAttachment(STM_Body);
}


