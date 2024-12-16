#include "H011B.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

AH011B::AH011B(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ST_BODY = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StBody"));
    this->Mi_Body = NULL;
    this->Collision_B = CreateDefaultSubobject<USphereComponent>(TEXT("Collision_B"));
    this->ST_BODY->SetupAttachment(RootComponent);
    this->Collision_B->SetupAttachment(ST_BODY);
}

void AH011B::OnOverlapEnemyBulletBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


