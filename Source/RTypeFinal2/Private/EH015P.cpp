#include "EH015P.h"
#include "Components/StaticMeshComponent.h"
#include "EEnemyType.h"
#include "EnemyPathPlayerComponent.h"

AEH015P::AEH015P(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnemyType = EEnemyType::BULLET;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->Mesh->SetupAttachment(RootComponent);
}


