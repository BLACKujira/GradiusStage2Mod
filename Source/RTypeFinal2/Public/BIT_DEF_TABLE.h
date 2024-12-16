#pragma once
#include "CoreMinimal.h"
#include "BIT_DEF.h"
#include "EBIT_NO.h"
#include "PCMN_DEF_TABLE.h"
#include "BIT_DEF_TABLE.generated.h"

USTRUCT(BlueprintType)
struct FBIT_DEF_TABLE : public FPCMN_DEF_TABLE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBIT_NO, FBIT_DEF> Tables;
    
    RTYPEFINAL2_API FBIT_DEF_TABLE();
};

