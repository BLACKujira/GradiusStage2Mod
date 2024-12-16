#include "H015P.h"
#include "Components/StaticMeshComponent.h"
#include "EnemyPathPlayerComponent.h"

AH015P::AH015P(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->PathDataAsset = NULL;
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->Mesh->SetupAttachment(RootComponent);
}


