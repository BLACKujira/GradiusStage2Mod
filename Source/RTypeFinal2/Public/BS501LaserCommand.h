#pragma once
#include "CoreMinimal.h"
#include "EBS501_LASERCOMMAND.h"
#include "BS501LaserCommand.generated.h"

USTRUCT(BlueprintType)
struct FBS501LaserCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBS501_LASERCOMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FBS501LaserCommand();
};

