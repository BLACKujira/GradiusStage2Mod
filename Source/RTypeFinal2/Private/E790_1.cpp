#include "E790_1.h"
#include "Components/SceneComponent.h"
#include "S790H017Env.h"
#include "S790H018Env.h"
#include "S790H044Env.h"

AE790_1::AE790_1(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(20);
    this->PrimitiveComponentB.AddDefaulted(16);
    this->PrimitiveComponentC.AddDefaulted(15);
    this->MeshComponent.AddDefaulted(5);
    this->EffectComponent.AddDefaulted(21);
    this->Path = NULL;
    this->InhaleSe = NULL;
    this->LaserEnvR = NULL;
    this->LaserEnvB = NULL;
    this->LaserEnvY = NULL;
    this->ChargeEff = NULL;
    this->ChargeSE = NULL;
    this->ShotNode = CreateDefaultSubobject<USceneComponent>(TEXT("WaveShotNode"));
    this->WCannonEnv_H017 = CreateDefaultSubobject<US790H017Env>(TEXT("ShockwaveEnv_H017"));
    this->WCannonEnv_H044 = CreateDefaultSubobject<US790H044Env>(TEXT("ShockwaveEnv_H044"));
    this->WCannonEnv_H018 = CreateDefaultSubobject<US790H018Env>(TEXT("ShockwaveEnv_H018"));
}

void AE790_1::HoleOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


