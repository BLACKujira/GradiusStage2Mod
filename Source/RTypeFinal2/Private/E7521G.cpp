#include "E7521G.h"
#include "Components/PoseableMeshComponent.h"

AE7521G::AE7521G(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("body"));
    this->body = (UPoseableMeshComponent*)RootComponent;
    this->Parent = NULL;
}


