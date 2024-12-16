#include "E1181.h"
#include "EnemyLocus.h"
#include "EnemyShoot.h"
#include "SplineCmdPlayer.h"

AE1181::AE1181(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(4);
    this->AudioComponent.AddDefaulted(1);
    this->EnemyShoot = CreateDefaultSubobject<UEnemyShoot>(TEXT("SHOOT"));
    this->PairActor = NULL;
    this->SplineCmdPlayer = CreateDefaultSubobject<USplineCmdPlayer>(TEXT("SplineCmdPlayer"));
    this->PtrWhip = NULL;
    this->PtrLightning = NULL;
    this->EnemyLocus = CreateDefaultSubobject<UEnemyLocus>(TEXT("LOCUS"));
}

void AE1181::OnCmdHit(ESplineCmd_HitFlag _hitFlags) {
}


