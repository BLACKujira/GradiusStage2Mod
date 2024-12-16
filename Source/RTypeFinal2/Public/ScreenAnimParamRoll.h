#pragma once
#include "CoreMinimal.h"
#include "EScreenAnimInterpType.h"
#include "ScreenAnimParamBase.h"
#include "ScreenAnimParamRoll.generated.h"

USTRUCT(BlueprintType)
struct FScreenAnimParamRoll : public FScreenAnimParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScreenAnimInterpType InterpType;
    
    RTYPEFINAL2_API FScreenAnimParamRoll();
};

