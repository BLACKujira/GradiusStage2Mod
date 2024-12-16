#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyShoot.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnemyShoot : public UActorComponent {
    GENERATED_BODY()
public:
    UEnemyShoot(const FObjectInitializer& ObjectInitializer);

};

