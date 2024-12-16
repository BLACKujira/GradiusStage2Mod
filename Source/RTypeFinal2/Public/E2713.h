#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2713.generated.h"

class UE2713Param;

UCLASS(Blueprintable)
class AE2713 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE2713Param* ParamE2713;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Serial;
    
    AE2713(const FObjectInitializer& ObjectInitializer);

};

