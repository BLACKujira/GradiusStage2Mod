#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3209.generated.h"

class UE3209Param;

UCLASS(Blueprintable)
class AE3209 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE3209Param* ParamE3209;
    
    AE3209(const FObjectInitializer& ObjectInitializer);

};

