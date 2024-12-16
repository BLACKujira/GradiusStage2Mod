#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2600Parts.generated.h"

class AE2600;

UCLASS(Blueprintable)
class AE2600Parts : public AEnemyActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE2600* ParentE2600;
    
public:
    AE2600Parts(const FObjectInitializer& ObjectInitializer);

};

