#include "L145.h"
#include "Components/SceneComponent.h"

AL145::AL145(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->Head = CreateDefaultSubobject<USceneComponent>(TEXT("Head"));
    this->Env = NULL;
    this->Head->SetupAttachment(RootComponent);
}


