#pragma once
#include "CoreMinimal.h"
#include "E001Param.h"
#include "E3411Param.generated.h"

UCLASS(Blueprintable)
class UE3411Param : public UE001Param {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rotateSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoveEffectAttachSocketName_Top;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoveEffectAttachSocketName_Bottom;
    
    UE3411Param();

};

