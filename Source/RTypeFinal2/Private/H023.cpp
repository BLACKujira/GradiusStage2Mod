#include "H023.h"
#include "Components/PointLightComponent.h"
#include "Components/SkeletalMeshComponent.h"

AH023::AH023(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("light"));
    this->LeaderMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LeaderMesh"));
    this->BodyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BodyMesh"));
    this->animg = NULL;
    this->anims = NULL;
    this->anime = NULL;
    this->LightComponent->SetupAttachment(RootComponent);
    this->LeaderMesh->SetupAttachment(RootComponent);
    this->BodyMesh->SetupAttachment(RootComponent);
}


