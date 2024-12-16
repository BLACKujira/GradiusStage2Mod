#include "H025.h"
#include "Components/PointLightComponent.h"
#include "Components/SkeletalMeshComponent.h"

AH025::AH025(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("light"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->LightComponent->SetupAttachment(RootComponent);
    this->Mesh->SetupAttachment(RootComponent);
}


