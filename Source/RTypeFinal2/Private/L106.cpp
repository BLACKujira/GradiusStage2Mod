#include "L106.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AL106::AL106(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MountRoot"));
    this->MountRoot = (USceneComponent*)RootComponent;
    this->LaserRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->ST_BODY = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StBody"));
    this->nowRoot = NULL;
    this->Env = NULL;
    this->ST_BODY->SetupAttachment(LaserRoot);
    this->LaserRoot->SetupAttachment(RootComponent);
}


