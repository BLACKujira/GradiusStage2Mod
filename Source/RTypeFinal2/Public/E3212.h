#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3212.generated.h"

class UE3212Param;

UCLASS(Blueprintable)
class AE3212 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE3212Param* ParamE3212;
    
    AE3212(const FObjectInitializer& ObjectInitializer);

};

