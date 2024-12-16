#include "L192.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL192::AL192(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("body"));
    this->Collision_A = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision_A"));
    this->nowRoot = NULL;
    this->Env = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
    this->Collision_A->SetupAttachment(NS_Body);
}

void AL192::OnOverlapEnemyBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


