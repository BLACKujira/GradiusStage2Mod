#pragma once
#include "CoreMinimal.h"
#include "ERECORD_ID.h"
#include "PCMN_DEF_TABLE.h"
#include "RECORD_DEF.h"
#include "RECORD_DEF_TABLE.generated.h"

USTRUCT(BlueprintType)
struct FRECORD_DEF_TABLE : public FPCMN_DEF_TABLE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERECORD_ID, FRECORD_DEF> Tables;
    
    RTYPEFINAL2_API FRECORD_DEF_TABLE();
};

