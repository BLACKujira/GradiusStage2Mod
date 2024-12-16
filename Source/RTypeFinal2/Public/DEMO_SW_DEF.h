#pragma once
#include "CoreMinimal.h"
#include "DEMO_SW_DEF.generated.h"

USTRUCT(BlueprintType)
struct FDEMO_SW_DEF {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPilot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCockpit;
    
    RTYPEFINAL2_API FDEMO_SW_DEF();
};

