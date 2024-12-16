#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2101_BODY.generated.h"

class ASplineActor;

UCLASS(Blueprintable)
class AE2101_BODY : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineActor* Path;
    
public:
    AE2101_BODY(const FObjectInitializer& ObjectInitializer);

};

