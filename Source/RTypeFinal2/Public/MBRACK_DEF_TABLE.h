#pragma once
#include "CoreMinimal.h"
#include "EBODY_NO.h"
#include "MBRACK_DEF.h"
#include "PCMN_DEF_TABLE.h"
#include "MBRACK_DEF_TABLE.generated.h"

USTRUCT(BlueprintType)
struct FMBRACK_DEF_TABLE : public FPCMN_DEF_TABLE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBODY_NO, FMBRACK_DEF> Tables;
    
    RTYPEFINAL2_API FMBRACK_DEF_TABLE();
};

