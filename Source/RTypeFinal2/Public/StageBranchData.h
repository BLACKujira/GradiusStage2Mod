#pragma once
#include "CoreMinimal.h"
#include "StageBranchData.generated.h"

USTRUCT(BlueprintType)
struct FStageBranchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GetFlagName;
    
    RTYPEFINAL2_API FStageBranchData();
};

