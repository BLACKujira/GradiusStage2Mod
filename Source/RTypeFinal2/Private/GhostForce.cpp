#include "GhostForce.h"
#include "Components/MaterialBillboardComponent.h"
#include "Components/SceneComponent.h"
#include "EGhostType.h"

AGhostForce::AGhostForce(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Type = EGhostType::FORCE;
    this->BillboardRoot = CreateDefaultSubobject<USceneComponent>(TEXT("BillboardRoot"));
    this->Billboard = CreateDefaultSubobject<UMaterialBillboardComponent>(TEXT("Billboard"));
    this->Material = NULL;
    this->BillboardRoot->SetupAttachment(RootComponent);
    this->Billboard->SetupAttachment(BillboardRoot);
}


