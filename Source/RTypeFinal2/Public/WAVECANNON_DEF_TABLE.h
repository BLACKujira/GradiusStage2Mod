#pragma once
#include "CoreMinimal.h"
#include "EWAVECANNON_NO.h"
#include "PCMN_DEF_TABLE.h"
#include "WAVECANNON_DEF.h"
#include "WAVECANNON_DEF_TABLE.generated.h"

USTRUCT(BlueprintType)
struct FWAVECANNON_DEF_TABLE : public FPCMN_DEF_TABLE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWAVECANNON_NO, FWAVECANNON_DEF> Tables;
    
    RTYPEFINAL2_API FWAVECANNON_DEF_TABLE();
};

