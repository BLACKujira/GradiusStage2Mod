#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S2702.generated.h"

class AE2702Cannon;

UCLASS(Blueprintable)
class AS2702 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE2702Cannon* ParentActor;
    
public:
    AS2702(const FObjectInitializer& ObjectInitializer);

};

