#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E233_BG_BODY.generated.h"

class ASplineActor;

UCLASS(Blueprintable)
class AE233_BG_BODY : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineActor* Path;
    
public:
    AE233_BG_BODY(const FObjectInitializer& ObjectInitializer);

};

