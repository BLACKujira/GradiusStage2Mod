#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E231_BG_BODY.generated.h"

class ASplineActor;

UCLASS(Blueprintable)
class AE231_BG_BODY : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineActor* Path;
    
public:
    AE231_BG_BODY(const FObjectInitializer& ObjectInitializer);

};

