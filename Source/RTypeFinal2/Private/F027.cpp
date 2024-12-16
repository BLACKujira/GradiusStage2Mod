#include "F027.h"
#include "Components/CapsuleComponent.h"

AF027::AF027(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyMesh.AddDefaulted(3);
    this->BodyMaterial.AddDefaulted(3);
    this->DataAsset = NULL;
    this->Collision_BS = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_BS"));
    this->Collision_BS->SetupAttachment(RootComponent);
}


