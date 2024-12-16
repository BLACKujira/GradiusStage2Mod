#include "GhostOnlineAircraft.h"
#include "Components/MaterialBillboardComponent.h"
#include "Components/SceneComponent.h"

AGhostOnlineAircraft::AGhostOnlineAircraft(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->BillboardRoot = CreateDefaultSubobject<USceneComponent>(TEXT("BillboardRoot"));
    this->Billboard = CreateDefaultSubobject<UMaterialBillboardComponent>(TEXT("Billboard"));
    this->Material = NULL;
    this->BillboardRoot->SetupAttachment(RootComponent);
    this->Billboard->SetupAttachment(BillboardRoot);
}

void AGhostOnlineAircraft::OnReplicatedCoordinateAndScore(const FReplicateCoordinateAndScore& _currentValue) {
}

int32 AGhostOnlineAircraft::BpGetPlayerIndex() {
    return 0;
}


