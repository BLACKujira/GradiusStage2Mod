#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2705.generated.h"

class ASplineActor;
class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class AE2705 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IsAround;
    
    AE2705(const FObjectInitializer& ObjectInitializer);

};

