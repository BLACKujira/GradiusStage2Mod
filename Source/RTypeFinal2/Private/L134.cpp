#include "L134.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "NiagaraComponent.h"

AL134::AL134(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->body = CreateDefaultSubobject<UChildActorComponent>(TEXT("body"));
    this->Collision_B = CreateDefaultSubobject<USphereComponent>(TEXT("Collision_B"));
    this->NS_Base = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBase"));
    this->lpSE = NULL;
    this->Env = NULL;
    this->body->SetupAttachment(RootComponent);
    this->Collision_B->SetupAttachment(RootComponent);
    this->NS_Base->SetupAttachment(RootComponent);
}


