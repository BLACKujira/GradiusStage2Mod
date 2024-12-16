#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E1702.generated.h"

UCLASS(Blueprintable)
class AE1702 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 modelId;
    
    AE1702(const FObjectInitializer& ObjectInitializer);

};

