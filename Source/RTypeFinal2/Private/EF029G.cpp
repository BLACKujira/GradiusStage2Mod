#include "EF029G.h"
#include "Components/PoseableMeshComponent.h"

AEF029G::AEF029G(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("body"));
    this->body = (UPoseableMeshComponent*)RootComponent;
    this->Parent = NULL;
}


