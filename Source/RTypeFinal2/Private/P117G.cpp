#include "P117G.h"
#include "Components/PoseableMeshComponent.h"

AP117G::AP117G(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("body"));
    this->body = (UPoseableMeshComponent*)RootComponent;
}


