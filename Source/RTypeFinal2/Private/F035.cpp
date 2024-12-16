#include "F035.h"
#include "Components/CapsuleComponent.h"

AF035::AF035(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyMesh.AddDefaulted(3);
    this->BodyMaterial.AddDefaulted(3);
    this->DataAsset = NULL;
    this->Collision_BS = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_BS"));
    this->RicochetEnv = NULL;
    this->Collision_BS->SetupAttachment(RootComponent);
}


