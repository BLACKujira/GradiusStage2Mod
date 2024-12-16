#pragma once
#include "CoreMinimal.h"
#include "EParamCapsule.h"
#include "E790_1_ColHead.generated.h"

USTRUCT(BlueprintType)
struct FE790_1_ColHead {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamCapsule Head_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamCapsule Head_B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    RTYPEFINAL2_API FE790_1_ColHead();
};

