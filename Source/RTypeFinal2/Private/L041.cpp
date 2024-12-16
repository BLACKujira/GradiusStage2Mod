#include "L041.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"
#include "EnemyPathPlayerComponent.h"

AL041::AL041(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->LaserRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->ST_BODY = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ST_BODY"));
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_Body"));
    this->Env = NULL;
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->PathDataAsset = NULL;
    this->LaserRoot->SetupAttachment(RootComponent);
    this->ST_BODY->SetupAttachment(LaserRoot);
    this->NS_Body->SetupAttachment(LaserRoot);
}


