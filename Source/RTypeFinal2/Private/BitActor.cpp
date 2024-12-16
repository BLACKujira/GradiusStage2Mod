#include "BitActor.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"

ABitActor::ABitActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->Collision_A = CreateDefaultSubobject<USphereComponent>(TEXT("Collision_A"));
    this->Collision_B = NULL;
    this->BodyNode = CreateDefaultSubobject<USceneComponent>(TEXT("BodyNode"));
    this->body = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BodyLv1"));
    this->bAsMenuModel = false;
    this->bWireFrame = false;
    this->ShotEnv = NULL;
    this->Collision_A->SetupAttachment(RootComponent);
    this->BodyNode->SetupAttachment(RootComponent);
    this->body->SetupAttachment(BodyNode);
}

void ABitActor::SetHide() {
}

void ABitActor::OnOverlapEnemyBulletBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ABitActor::OnOverlapEnemyBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ABitActor::CbFireInterval(int32 _idx) {
}


