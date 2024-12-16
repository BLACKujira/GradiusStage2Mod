#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS707Tractor.generated.h"

class UBS707TractorParam;

UCLASS(Blueprintable)
class ABS707Tractor : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBS707TractorParam* ParamBS707Tractor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    ABS707Tractor(const FObjectInitializer& ObjectInitializer);

};

