#include "F024.h"
#include "Components/CapsuleComponent.h"

AF024::AF024(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyMesh.AddDefaulted(4);
    this->BodyMaterial.AddDefaulted(4);
    this->DataAsset = NULL;
    this->Collision_BS = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_BS"));
    this->RicochetEnv = NULL;
    this->Collision_BS->SetupAttachment(RootComponent);
}


