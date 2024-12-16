#include "F041.h"
#include "Components/CapsuleComponent.h"

AF041::AF041(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyMesh.AddDefaulted(6);
    this->BodyMaterial.AddDefaulted(6);
    this->Collision_B_RING = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_B_RING"));
    this->DataAssetF041 = NULL;
    this->Collision_B_RING->SetupAttachment(RootComponent);
}


