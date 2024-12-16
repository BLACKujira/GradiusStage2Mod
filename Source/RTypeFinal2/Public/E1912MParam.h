#pragma once
#include "CoreMinimal.h"
#include "S002Param.h"
#include "E1912MParam.generated.h"

UCLASS(Blueprintable)
class UE1912MParam : public US002Param {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceDeathTimer;
    
    UE1912MParam();

};

