#pragma once
#include "CoreMinimal.h"
#include "E003Param.h"
#include "E7343Param.generated.h"

UCLASS(Blueprintable)
class UE7343Param : public UE003Param {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitDeathSETime;
    
    UE7343Param();

};

