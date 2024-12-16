#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E7521.generated.h"

class ASplineActor;

UCLASS(Blueprintable)
class AE7521 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineActor* Path;
    
public:
    AE7521(const FObjectInitializer& ObjectInitializer);

};

