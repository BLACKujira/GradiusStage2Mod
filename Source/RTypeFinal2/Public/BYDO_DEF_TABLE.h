#pragma once
#include "CoreMinimal.h"
#include "BYDO_DEF.h"
#include "PCMN_DEF_TABLE.h"
#include "BYDO_DEF_TABLE.generated.h"

USTRUCT(BlueprintType)
struct FBYDO_DEF_TABLE : public FPCMN_DEF_TABLE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FBYDO_DEF> Tables;
    
    RTYPEFINAL2_API FBYDO_DEF_TABLE();
};

