#include "L190.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL190::AL190(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("body"));
    this->Collision_A = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision_A"));
    this->Collision_B = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision_B"));
    this->nowRoot = NULL;
    this->Env = NULL;
    this->ParentActor = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
    this->Collision_A->SetupAttachment(NS_Body);
    this->Collision_B->SetupAttachment(NS_Body);
}

void AL190::OnOverlapEnemyBulletBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AL190::OnOverlapEnemyBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


