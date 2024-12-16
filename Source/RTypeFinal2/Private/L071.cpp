#include "L071.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "NiagaraComponent.h"

AL071::AL071(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("body"));
    this->Collision_A = CreateDefaultSubobject<USphereComponent>(TEXT("Collision_A"));
    this->LightComponent = NULL;
    this->BodyEff = NULL;
    this->nowRoot = NULL;
    this->Env = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
    this->Collision_A->SetupAttachment(NS_Body);
}

void AL071::OnOverlapEnemyBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


