#include "L185.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AL185::AL185(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MountRoot"));
    this->MountRoot = (USceneComponent*)RootComponent;
    this->LaserRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->ST_BODY = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ST_BODY"));
    this->nowRoot = NULL;
    this->Env = NULL;
    this->LaserRoot->SetupAttachment(RootComponent);
    this->ST_BODY->SetupAttachment(LaserRoot);
}


