#include "L099B.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL099B::AL099B(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->Collision_A = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_A"));
    this->NS_ShotBody = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->Env = NULL;
    this->Collision_A->SetupAttachment(RootComponent);
    this->NS_ShotBody->SetupAttachment(RootComponent);
}

void AL099B::OnOverlapEnemyBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


