#include "B002.h"
#include "Components/SphereComponent.h"

AB002::AB002(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Collision_B = CreateDefaultSubobject<USphereComponent>(TEXT("Collision_B"));
    this->DataAsset = NULL;
    this->Collision_B->SetupAttachment(RootComponent);
}


