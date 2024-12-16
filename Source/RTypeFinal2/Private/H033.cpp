#include "H033.h"
#include "Components/PointLightComponent.h"
#include "Components/SkeletalMeshComponent.h"

AH033::AH033(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("light"));
    this->BodyMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BodyMesh"));
    this->LightComponent->SetupAttachment(RootComponent);
    this->BodyMeshComponent->SetupAttachment(RootComponent);
}


