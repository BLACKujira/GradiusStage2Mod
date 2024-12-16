#include "L191.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "NiagaraComponent.h"
#include "EnemyPathPlayerComponent.h"

AL191::AL191(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("body"));
    this->Collision_A = CreateDefaultSubobject<USphereComponent>(TEXT("Collision_A"));
    this->nowRoot = NULL;
    this->Env = NULL;
    this->ParentActor = NULL;
    this->PrerequisiteActor = NULL;
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->PathDataAsset = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
    this->Collision_A->SetupAttachment(NS_Body);
}

void AL191::OnOverlapEnemyBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


