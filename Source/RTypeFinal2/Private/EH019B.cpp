#include "EH019B.h"
#include "Components/CapsuleComponent.h"
#include "NiagaraComponent.h"
#include "EnemyPathPlayerComponent.h"

AEH019B::AEH019B(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Collision_A = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_A"));
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->PathDataAsset = NULL;
    this->Collision_A->SetupAttachment(RootComponent);
    this->NS_Body->SetupAttachment(RootComponent);
}


