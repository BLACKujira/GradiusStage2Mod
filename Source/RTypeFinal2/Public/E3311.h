#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3311.generated.h"

class ASplineActor;
class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class AE3311 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathData;
    
    AE3311(const FObjectInitializer& ObjectInitializer);

};

