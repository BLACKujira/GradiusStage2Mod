#include "L079.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AL079::AL079(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->ST_BODY = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StBody"));
    this->Collision_A = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_A"));
    this->Env = NULL;
    this->ST_BODY->SetupAttachment(RootComponent);
    this->Collision_A->SetupAttachment(RootComponent);
}

void AL079::OnOverlapEnemyBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


