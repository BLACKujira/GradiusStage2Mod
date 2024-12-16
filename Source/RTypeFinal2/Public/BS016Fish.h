#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS016Fish.generated.h"

class ASplineActor;

UCLASS(Blueprintable)
class ABS016Fish : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineActor* Spline;
    
public:
    ABS016Fish(const FObjectInitializer& ObjectInitializer);

};

