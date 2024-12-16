#include "B006.h"
#include "Components/StaticMeshComponent.h"

AB006::AB006(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BODYS = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BODYS"));
    this->DataAsset = NULL;
    this->BODYS->SetupAttachment(BodyNode);
}


