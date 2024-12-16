#include "L179S.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL179S::AL179S(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->NS_Head = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsHead"));
    this->Collision_A = NULL;
    this->Env = NULL;
    this->dAsset = NULL;
    this->NS_Head->SetupAttachment(RootComponent);
}


