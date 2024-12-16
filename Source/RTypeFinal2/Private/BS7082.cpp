#include "BS7082.h"
#include "EH001Env.h"
#include "EnemyPathPlayerComponent.h"

ABS7082::ABS7082(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(1);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->EffectComponent.AddDefaulted(4);
    this->AudioComponent.AddDefaulted(1);
    this->ExtraNodes.AddDefaulted(5);
    this->WCannonEnv = CreateDefaultSubobject<UEH001Env>(TEXT("ShockwaveEnv"));
    this->BS7082ForceActor = NULL;
    this->ParentEnemy = NULL;
    this->EntryPathData = NULL;
}

void ABS7082::CmdEvent2(FName _eventName, int32 _value) {
}


