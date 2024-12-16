#pragma once
#include "CoreMinimal.h"
#include "EParamCapsule.h"
#include "E790_1_ColTail.generated.h"

USTRUCT(BlueprintType)
struct FE790_1_ColTail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamCapsule Tail_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamCapsule Tail_B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    RTYPEFINAL2_API FE790_1_ColTail();
};

