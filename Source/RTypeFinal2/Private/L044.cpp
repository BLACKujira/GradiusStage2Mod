#include "L044.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AL044::AL044(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->ST_BODY = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StBody"));
    this->Env = NULL;
    this->ST_BODY->SetupAttachment(RootComponent);
}


