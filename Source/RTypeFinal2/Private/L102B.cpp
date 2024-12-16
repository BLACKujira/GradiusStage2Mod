#include "L102B.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "EnemyPathPlayerComponent.h"

AL102B::AL102B(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MountRoot"));
    this->MountRoot = (USceneComponent*)RootComponent;
    this->LaserNode = CreateDefaultSubobject<USceneComponent>(TEXT("LaserNode"));
    this->NS_ShotBody = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->NS_ShotBody2 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot2"));
    this->Env = NULL;
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->PathDataAsset = NULL;
    this->LaserNode->SetupAttachment(RootComponent);
    this->NS_ShotBody->SetupAttachment(LaserNode);
    this->NS_ShotBody2->SetupAttachment(RootComponent);
}


