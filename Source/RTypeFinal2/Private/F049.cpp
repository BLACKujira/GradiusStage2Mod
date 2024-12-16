#include "F049.h"
#include "Components/CapsuleComponent.h"

AF049::AF049(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyMesh.AddDefaulted(3);
    this->BodyMaterial.AddDefaulted(3);
    this->Collision_B_UA = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_B_UA"));
    this->Collision_B_UA2 = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_B_UA2"));
    this->Collision_B_LA = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_B_LA"));
    this->Collision_B_LA2 = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_B_LA2"));
    this->DataAssetF049 = NULL;
    this->Collision_B_UA->SetupAttachment(RootComponent);
    this->Collision_B_UA2->SetupAttachment(RootComponent);
    this->Collision_B_LA->SetupAttachment(RootComponent);
    this->Collision_B_LA2->SetupAttachment(RootComponent);
}


