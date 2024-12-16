#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "E071ItemMove.generated.h"

USTRUCT(BlueprintType)
struct FE071ItemMove {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AppearWaitTime;
    
    RTYPEFINAL2_API FE071ItemMove();
};

