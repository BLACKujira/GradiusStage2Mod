#include "ScrollMeshActor.h"
#include "Components/SceneComponent.h"

AScrollMeshActor::AScrollMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ScrollLength = 0.00f;
}


