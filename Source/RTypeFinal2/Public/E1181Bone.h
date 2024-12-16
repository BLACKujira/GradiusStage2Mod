#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "E1181BoneInfo.h"
#include "E1181Bone.generated.h"

USTRUCT(BlueprintType)
struct FE1181Bone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FE1181BoneInfo Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Rotate;
    
    RTYPEFINAL2_API FE1181Bone();
};

