#include "EWXXXX.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AEWXXXX::AEWXXXX(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->RootNode = (USceneComponent*)RootComponent;
    this->Collision_A = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_A"));
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsEffBody"));
    this->ParentEPXXXX = NULL;
    this->Env = NULL;
    this->Collision_A->SetupAttachment(RootComponent);
    this->NS_Body->SetupAttachment(RootComponent);
}

void AEWXXXX::OnOverlapEnemyBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AEWXXXX::OnHitLand(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& hit) {
}


