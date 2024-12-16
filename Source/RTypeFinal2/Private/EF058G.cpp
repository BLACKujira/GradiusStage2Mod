#include "EF058G.h"
#include "Components/StaticMeshComponent.h"

AEF058G::AEF058G(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("body"));
    this->body = (UStaticMeshComponent*)RootComponent;
    this->Parent = NULL;
}


