#include "S1181Whip.h"
#include "Components/ChildActorComponent.h"
#include "EEnemyType.h"

AS1181Whip::AS1181Whip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnemyType = EEnemyType::BULLET;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->EffectComponent.AddDefaulted(1);
    this->AudioComponent.AddDefaulted(2);
    this->body = CreateDefaultSubobject<UChildActorComponent>(TEXT("body"));
    this->DataAsset = NULL;
    this->body->SetupAttachment(RootComponent);
}

void AS1181Whip::AttackOnOverlapBegin(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}


