#pragma once
#include "CoreMinimal.h"
#include "EMEDAL_ID.h"
#include "MEDAL_DEF.h"
#include "PCMN_DEF_TABLE.h"
#include "MEDAL_DEF_TABLE.generated.h"

USTRUCT(BlueprintType)
struct FMEDAL_DEF_TABLE : public FPCMN_DEF_TABLE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMEDAL_ID, FMEDAL_DEF> Tables;
    
    RTYPEFINAL2_API FMEDAL_DEF_TABLE();
};

