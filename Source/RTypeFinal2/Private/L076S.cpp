#include "L076S.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"

AL076S::AL076S(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->Collision_A = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_A"));
    this->Env = NULL;
    this->Collision_A->SetupAttachment(RootComponent);
}

void AL076S::OnOverlapEnemyBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


