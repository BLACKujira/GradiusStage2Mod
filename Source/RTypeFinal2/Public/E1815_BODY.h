#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E1815_BODY.generated.h"

class ASplineActor;

UCLASS(Blueprintable)
class AE1815_BODY : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineActor* Path;
    
public:
    AE1815_BODY(const FObjectInitializer& ObjectInitializer);

};

