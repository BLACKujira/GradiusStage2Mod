#pragma once
#include "CoreMinimal.h"
#include "E001Param.h"
#include "Templates/SubclassOf.h"
#include "E7341Param.generated.h"

class UAnimInstance;

UCLASS(Blueprintable)
class UE7341Param : public UE001Param {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitDeathSETime;
    
    UE7341Param();

};

