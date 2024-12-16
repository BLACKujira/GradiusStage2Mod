#pragma once
#include "CoreMinimal.h"
#include "EPPOSE_ID.h"
#include "PCMN_DEF_TABLE.h"
#include "PPOSE_DEF.h"
#include "PPOSE_DEF_TABLE.generated.h"

USTRUCT(BlueprintType)
struct FPPOSE_DEF_TABLE : public FPCMN_DEF_TABLE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPPOSE_ID, FPPOSE_DEF> Tables;
    
    RTYPEFINAL2_API FPPOSE_DEF_TABLE();
};

