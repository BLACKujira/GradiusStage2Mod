#include "PointActor.h"
#include "Components/SceneComponent.h"

APointActor::APointActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TransformComponent"));
}


