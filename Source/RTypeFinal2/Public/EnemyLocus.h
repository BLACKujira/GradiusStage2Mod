#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyLocus.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnemyLocus : public UActorComponent {
    GENERATED_BODY()
public:
    UEnemyLocus(const FObjectInitializer& ObjectInitializer);

};

