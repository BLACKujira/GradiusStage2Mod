#include "E7520G.h"
#include "Components/PoseableMeshComponent.h"

AE7520G::AE7520G(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("body"));
    this->body = (UPoseableMeshComponent*)RootComponent;
    this->Parent = NULL;
}


