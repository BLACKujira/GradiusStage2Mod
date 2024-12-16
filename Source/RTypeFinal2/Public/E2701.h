#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2701.generated.h"

UCLASS(Blueprintable)
class AE2701 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SerialNo;
    
    AE2701(const FObjectInitializer& ObjectInitializer);

};

