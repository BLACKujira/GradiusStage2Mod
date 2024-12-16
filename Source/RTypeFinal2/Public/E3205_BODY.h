#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3205_BODY.generated.h"

class ASplineActor;

UCLASS(Blueprintable)
class AE3205_BODY : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineActor* Path;
    
public:
    AE3205_BODY(const FObjectInitializer& ObjectInitializer);

};

