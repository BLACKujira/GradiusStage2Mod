#pragma once
#include "CoreMinimal.h"
#include "EE5501_BODY_TYPE.h"
#include "EnemyActor.h"
#include "E5501_BODY.generated.h"

class ASplineActor;
class UE5501Param;

UCLASS(Blueprintable)
class AE5501_BODY : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE5501Param* ParamE5501;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EE5501_BODY_TYPE BodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineActor* Path;
    
    AE5501_BODY(const FObjectInitializer& ObjectInitializer);

};

