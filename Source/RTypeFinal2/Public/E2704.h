#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2704.generated.h"

class ASplineActor;
class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class AE2704 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IsAround;
    
    AE2704(const FObjectInitializer& ObjectInitializer);

};

