#include "E1817.h"

AE1817::AE1817(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    UStaticMeshComponent* mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    mesh->SetupAttachment(RootComponent); 
    mesh->SetStaticMesh(LoadObject<UStaticMesh>(nullptr, TEXT("/Game/Enemy/E1817/E1817_01")));

    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.Add(mesh);
    this->EffectComponent.AddDefaulted(1);
}


