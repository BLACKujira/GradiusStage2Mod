#include "EF057G.h"
#include "Components/StaticMeshComponent.h"

AEF057G::AEF057G(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("body"));
    this->body = (UStaticMeshComponent*)RootComponent;
    this->Parent = NULL;
}


