#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E7520.generated.h"

class ASplineActor;

UCLASS(Blueprintable)
class AE7520 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineActor* Path;
    
public:
    AE7520(const FObjectInitializer& ObjectInitializer);

};

