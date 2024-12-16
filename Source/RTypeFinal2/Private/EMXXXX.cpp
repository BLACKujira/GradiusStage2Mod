#include "EMXXXX.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "EEnemyType.h"

AEMXXXX::AEMXXXX(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USceneComponent>(TEXT("Root"))) {
    this->EnemyType = EEnemyType::BULLET;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(1);
    this->Collision_A = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_A"));
    this->Collision_B = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_B"));
    this->Burner = NULL;
    this->ParentEPXXXX = NULL;
    this->Env = NULL;
    this->bAsMenuModel = false;
    this->bWireFrame = false;
    this->Collision_A->SetupAttachment(Root);
    this->Collision_B->SetupAttachment(Root);
}

void AEMXXXX::OnOverlapPlayerBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AEMXXXX::OnOverlapEnemyBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AEMXXXX::OnHitLand(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& hit) {
}


