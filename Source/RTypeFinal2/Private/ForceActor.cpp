#include "ForceActor.h"
#include "Components/CapsuleComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "NiagaraComponent.h"

AForceActor::AForceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->Collision_B = CreateDefaultSubobject<USphereComponent>(TEXT("Collision_B"));
    this->Collision_A = CreateDefaultSubobject<USphereComponent>(TEXT("Collision_A"));
    this->PlayerCatcher = CreateDefaultSubobject<UCapsuleComponent>(TEXT("PlayerCatcher"));
    this->BodyNode = CreateDefaultSubobject<USceneComponent>(TEXT("BodyNode"));
    this->BodyMesh.AddDefaulted(3);
    this->BodyMaterial.AddDefaulted(3);
    this->LightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("light"));
    this->NC_Shoot = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NcShoot"));
    this->NC_OVD = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NcOVD"));
    this->bAsMenuModel = false;
    this->bWireFrame = false;
    this->ShotEnv = NULL;
    this->LaserEnvR = NULL;
    this->LaserEnvB = NULL;
    this->LaserEnvY = NULL;
    this->SpWpnEnv = NULL;
    this->HitEffPool = NULL;
    this->Collision_B->SetupAttachment(RootComponent);
    this->Collision_A->SetupAttachment(RootComponent);
    this->PlayerCatcher->SetupAttachment(RootComponent);
    this->BodyNode->SetupAttachment(RootComponent);
    this->LightComponent->SetupAttachment(RootComponent);
    this->NC_Shoot->SetupAttachment(RootComponent);
    this->NC_OVD->SetupAttachment(RootComponent);
}

void AForceActor::TeleportToCenter() {
}

void AForceActor::SetUniqueEffectVisibility(bool _on) {
}

void AForceActor::SetDummyDocking(AAircraftBasePawn* _dummyPlayer, bool _isFront) {
}

void AForceActor::ReqActEnter() {
}

void AForceActor::ReleaseBite() {
}

void AForceActor::PreDestroyWeapon() {
}

void AForceActor::OnOverlapEnemyBulletBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AForceActor::OnOverlapEnemyBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool AForceActor::IsShooting() {
    return false;
}

bool AForceActor::IsDocking() {
    return false;
}

bool AForceActor::IsCalling() {
    return false;
}

void AForceActor::DockingForce(bool bFront) {
}


