#include "L080.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AL080::AL080(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->ST_BODY = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StBody"));
    this->Env = NULL;
    this->ShotAudio = NULL;
    this->ST_BODY->SetupAttachment(RootComponent);
}


