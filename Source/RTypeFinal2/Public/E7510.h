#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E7510.generated.h"

class UE7510Param;

UCLASS(Blueprintable)
class AE7510 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE7510Param* ParamE7510;
    
    AE7510(const FObjectInitializer& ObjectInitializer);

};

