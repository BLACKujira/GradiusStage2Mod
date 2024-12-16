#include "F029G.h"
#include "Components/PoseableMeshComponent.h"

AF029G::AF029G(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("body"));
    this->body = (UPoseableMeshComponent*)RootComponent;
}


