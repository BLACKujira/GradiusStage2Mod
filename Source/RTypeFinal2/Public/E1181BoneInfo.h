#pragma once
#include "CoreMinimal.h"
#include "E1181BoneInfo.generated.h"

USTRUCT(BlueprintType)
struct FE1181BoneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropName;
    
    RTYPEFINAL2_API FE1181BoneInfo();
};

