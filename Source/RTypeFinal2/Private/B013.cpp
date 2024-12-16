#include "B013.h"
#include "Components/CapsuleComponent.h"

AB013::AB013(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DataAsset = NULL;
    this->Collision_BS = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_BS"));
    this->RicochetEnv = NULL;
    this->Collision_BS->SetupAttachment(RootComponent);
}


