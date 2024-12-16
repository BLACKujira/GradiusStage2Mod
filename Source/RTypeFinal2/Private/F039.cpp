#include "F039.h"
#include "Components/CapsuleComponent.h"

AF039::AF039(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyMesh.AddDefaulted(3);
    this->BodyMaterial.AddDefaulted(3);
    this->Collision_B_UA = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_B_UA"));
    this->Collision_B_LA = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_B_LA"));
    this->DataAssetF039 = NULL;
    this->Collision_B_UA->SetupAttachment(RootComponent);
    this->Collision_B_LA->SetupAttachment(RootComponent);
}


