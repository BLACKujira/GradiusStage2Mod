#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E1641_LandEff.generated.h"

class UE1641_LandEffParam;

UCLASS(Blueprintable)
class AE1641_LandEff : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE1641_LandEffParam* ParamE1641_LandEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireExtendTime;
    
    AE1641_LandEff(const FObjectInitializer& ObjectInitializer);

};

