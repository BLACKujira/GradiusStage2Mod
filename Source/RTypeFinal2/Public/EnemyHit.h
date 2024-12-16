#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyHit.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnemyHit : public UActorComponent {
    GENERATED_BODY()
public:
    UEnemyHit(const FObjectInitializer& ObjectInitializer);

};

