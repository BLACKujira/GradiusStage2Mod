#include "F021.h"
#include "Components/CapsuleComponent.h"

AF021::AF021(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyMesh.AddDefaulted(3);
    this->BodyMaterial.AddDefaulted(3);
    this->Collision_B_TB = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_B_TB"));
    this->Collision_B_TF = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_B_TF"));
    this->Collision_B_UB = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_B_UB"));
    this->Collision_B_UF = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_B_UF"));
    this->DataAssetF021 = NULL;
    this->Collision_B_TB->SetupAttachment(RootComponent);
    this->Collision_B_TF->SetupAttachment(RootComponent);
    this->Collision_B_UB->SetupAttachment(RootComponent);
    this->Collision_B_UF->SetupAttachment(RootComponent);
}


