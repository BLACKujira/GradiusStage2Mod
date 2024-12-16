#include "P115.h"
#include "Components/SkeletalMeshComponent.h"

AP115::AP115(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DataAsset = NULL;
    this->DCMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DCMesh"));
    this->DCMesh->SetupAttachment(BodyMeshNode);
}


