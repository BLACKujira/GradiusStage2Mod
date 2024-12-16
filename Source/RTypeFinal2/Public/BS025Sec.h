#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS025Sec.generated.h"

class ABS025Sec;
class ABS025ShotAB;

UCLASS(Blueprintable)
class ABS025Sec : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABS025Sec* TargetSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABS025ShotAB* ShotActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABS025ShotAB* TargetShotActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    ABS025Sec(const FObjectInitializer& ObjectInitializer);

};

