#include "P113.h"
#include "Components/CapsuleComponent.h"

AP113::AP113(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Collision_ND = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_ND"));
    this->DataAsset = NULL;
    this->Collision_ND->SetupAttachment(RootComponent);
}


