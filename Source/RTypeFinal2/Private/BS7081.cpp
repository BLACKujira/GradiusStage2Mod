#include "BS7081.h"
#include "EH001Env.h"
#include "EH019Env.h"
#include "EH020_2Env.h"
#include "EH038Env.h"
#include "EH039Env.h"
#include "EH040Env.h"
#include "EM001Env.h"
#include "EM004Env.h"
#include "EM007Env.h"
#include "EM009Env.h"
#include "EnemyPathPlayerComponent.h"

ABS7081::ABS7081(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(1);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->EffectComponent.AddDefaulted(3);
    this->AudioComponent.AddDefaulted(1);
    this->ExtraNodes.AddDefaulted(5);
    this->WCannonEnv1 = CreateDefaultSubobject<UEH001Env>(TEXT("ShockwaveEnv1"));
    this->WCannonEnv2 = CreateDefaultSubobject<UEH038Env>(TEXT("ShockwaveEnv2"));
    this->WCannonEnv3 = CreateDefaultSubobject<UEH019Env>(TEXT("ShockwaveEnv3"));
    this->WCannonEnv4 = CreateDefaultSubobject<UEH039Env>(TEXT("ShockwaveEnv4"));
    this->WCannonEnv5 = CreateDefaultSubobject<UEH040Env>(TEXT("ShockwaveEnv5"));
    this->WCannonEnv6 = CreateDefaultSubobject<UEH020_2Env>(TEXT("ShockwaveEnv6"));
    this->EM001Env = CreateDefaultSubobject<UEM001Env>(TEXT("EM001Env"));
    this->EM004Env = CreateDefaultSubobject<UEM004Env>(TEXT("EM004Env"));
    this->EM007Env = CreateDefaultSubobject<UEM007Env>(TEXT("EM007Env"));
    this->EM009Env = CreateDefaultSubobject<UEM009Env>(TEXT("EM009Env"));
}

void ABS7081::CmdEvent2(FName _eventName, int32 _value) {
}


