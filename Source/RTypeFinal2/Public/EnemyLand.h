#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyLand.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnemyLand : public UActorComponent {
    GENERATED_BODY()
public:
    UEnemyLand(const FObjectInitializer& ObjectInitializer);

};

