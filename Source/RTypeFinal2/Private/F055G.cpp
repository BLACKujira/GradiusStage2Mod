#include "F055G.h"
#include "Components/PoseableMeshComponent.h"

AF055G::AF055G(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("body"));
    this->body = (UPoseableMeshComponent*)RootComponent;
}


