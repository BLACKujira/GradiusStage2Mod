#include "L039S.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL039S::AL039S(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_Body"));
    this->Env = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


