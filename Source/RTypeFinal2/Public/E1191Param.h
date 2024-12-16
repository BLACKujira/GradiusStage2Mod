#pragma once
#include "CoreMinimal.h"
#include "E1191ParamArm.h"
#include "E1191ParamBody.h"
#include "EnemyParam.h"
#include "E1191Param.generated.h"

UCLASS(Blueprintable)
class UE1191Param : public UEnemyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FE1191ParamBody body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FE1191ParamArm Arm;
    
    UE1191Param();

};

