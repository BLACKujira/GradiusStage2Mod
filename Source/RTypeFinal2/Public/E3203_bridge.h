#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3203_bridge.generated.h"

UCLASS(Blueprintable)
class AE3203_bridge : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    AE3203_bridge(const FObjectInitializer& ObjectInitializer);

};

