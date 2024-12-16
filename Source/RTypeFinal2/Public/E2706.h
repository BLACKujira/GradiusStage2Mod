#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2706.generated.h"

class ASplineActor;
class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class AE2706 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IsAround;
    
    AE2706(const FObjectInitializer& ObjectInitializer);

};

