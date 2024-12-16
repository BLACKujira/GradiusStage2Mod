#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS025ShotAB.generated.h"

UCLASS(Blueprintable)
class ABS025ShotAB : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentSecActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* TargetSecActor;
    
public:
    ABS025ShotAB(const FObjectInitializer& ObjectInitializer);

};

