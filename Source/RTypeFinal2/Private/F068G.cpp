#include "F068G.h"
#include "Components/PoseableMeshComponent.h"

AF068G::AF068G(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("body"));
    this->DataAssetF068 = NULL;
    this->body = (UPoseableMeshComponent*)RootComponent;
    this->Force = NULL;
}


