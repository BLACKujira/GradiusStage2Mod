#include "L179.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL179::AL179(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->NS_Head = CreateDefaultSubobject<USceneComponent>(TEXT("NsHead"));
    this->Collision_A = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_A"));
    this->NS_Base = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBase"));
    this->Env = NULL;
    this->dAsset = NULL;
    this->NS_Head->SetupAttachment(RootComponent);
    this->Collision_A->SetupAttachment(NS_Head);
    this->NS_Base->SetupAttachment(RootComponent);
}


