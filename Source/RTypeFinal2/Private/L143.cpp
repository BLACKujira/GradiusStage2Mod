#include "L143.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "EnemyPathPlayerComponent.h"

AL143::AL143(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->LaserRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBody"));
    this->NS_Body_Show = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_Body_Show"));
    this->NS_Fire = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsFire"));
    this->Env = NULL;
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->PathDataAsset = NULL;
    this->NS_Body_Show->SetupAttachment(RootComponent);
    this->LaserRoot->SetupAttachment(RootComponent);
    this->NS_Body->SetupAttachment(LaserRoot);
}


