#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2900.generated.h"

class UE2900Param;

UCLASS(Blueprintable)
class AE2900 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE2900Param* ParamE2900;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Serial;
    
    AE2900(const FObjectInitializer& ObjectInitializer);

};

