#pragma once
#include "CoreMinimal.h"
#include "PCMN_DEF_TABLE.h"
#include "POBJ_DEF.h"
#include "POBJ_DEF_TABLE.generated.h"

USTRUCT(BlueprintType)
struct FPOBJ_DEF_TABLE : public FPCMN_DEF_TABLE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPOBJ_DEF> Tables;
    
    RTYPEFINAL2_API FPOBJ_DEF_TABLE();
};

