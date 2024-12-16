#include "GhostOnlineForce.h"
#include "Components/MaterialBillboardComponent.h"
#include "Components/SceneComponent.h"
#include "EGhostType.h"

AGhostOnlineForce::AGhostOnlineForce(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Type = EGhostType::FORCE;
    this->BillboardRoot = CreateDefaultSubobject<USceneComponent>(TEXT("BillboardRoot"));
    this->Billboard = CreateDefaultSubobject<UMaterialBillboardComponent>(TEXT("Billboard"));
    this->Material = NULL;
    this->BillboardRoot->SetupAttachment(RootComponent);
    this->Billboard->SetupAttachment(BillboardRoot);
}

void AGhostOnlineForce::OnReplicatedCoordinate(const FReplicateCoordinate& _currentValue) {
}


