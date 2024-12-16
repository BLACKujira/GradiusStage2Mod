#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3210.generated.h"

class UE3210Param;

UCLASS(Blueprintable)
class AE3210 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE3210Param* ParamE3210;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Type;
    
    AE3210(const FObjectInitializer& ObjectInitializer);

};

