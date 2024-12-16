#pragma once
#include "CoreMinimal.h"
#include "CLASS_DEF.h"
#include "ECLASS_ID.h"
#include "PCMN_DEF_TABLE.h"
#include "CLASS_DEF_TABLE.generated.h"

USTRUCT(BlueprintType)
struct FCLASS_DEF_TABLE : public FPCMN_DEF_TABLE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECLASS_ID, FCLASS_DEF> Tables;
    
    RTYPEFINAL2_API FCLASS_DEF_TABLE();
};

