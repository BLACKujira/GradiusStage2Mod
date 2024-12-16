#include "F063.h"
#include "Components/CapsuleComponent.h"

AF063::AF063(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyMesh.AddDefaulted(3);
    this->BodyMaterial.AddDefaulted(3);
    this->Collision_B_UA = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_B_UA"));
    this->Collision_B_UA2 = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_B_UA2"));
    this->Collision_B_UA3 = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_B_UA3"));
    this->Collision_B_UA4 = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_B_UA4"));
    this->Collision_B_LA = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_B_LA"));
    this->Collision_B_LA2 = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_B_LA2"));
    this->Collision_B_LA3 = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_B_LA3"));
    this->Collision_B_LA4 = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_B_LA4"));
    this->DataAssetF063 = NULL;
    this->DammyPool = NULL;
    this->Collision_B_UA->SetupAttachment(RootComponent);
    this->Collision_B_UA2->SetupAttachment(RootComponent);
    this->Collision_B_UA3->SetupAttachment(RootComponent);
    this->Collision_B_UA4->SetupAttachment(RootComponent);
    this->Collision_B_LA->SetupAttachment(RootComponent);
    this->Collision_B_LA2->SetupAttachment(RootComponent);
    this->Collision_B_LA3->SetupAttachment(RootComponent);
    this->Collision_B_LA4->SetupAttachment(RootComponent);
}


