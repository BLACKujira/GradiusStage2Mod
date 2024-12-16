#pragma once
#include "CoreMinimal.h"
#include "EParamSphere.h"
#include "E790_1_ColNeck.generated.h"

USTRUCT(BlueprintType)
struct FE790_1_ColNeck {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamSphere Neck_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamSphere Neck_B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    RTYPEFINAL2_API FE790_1_ColNeck();
};

