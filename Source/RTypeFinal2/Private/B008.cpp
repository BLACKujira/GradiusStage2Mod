#include "B008.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

AB008::AB008(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Collision_B = CreateDefaultSubobject<USphereComponent>(TEXT("Collision_B"));
    this->BODYS = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BODYS"));
    this->DataAsset = NULL;
    this->Collision_B->SetupAttachment(RootComponent);
    this->BODYS->SetupAttachment(BodyNode);
}


