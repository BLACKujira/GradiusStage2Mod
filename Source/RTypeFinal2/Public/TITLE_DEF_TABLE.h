#pragma once
#include "CoreMinimal.h"
#include "ETITLE_ID.h"
#include "PCMN_DEF_TABLE.h"
#include "TITLE_DEF.h"
#include "TITLE_DEF_TABLE.generated.h"

USTRUCT(BlueprintType)
struct FTITLE_DEF_TABLE : public FPCMN_DEF_TABLE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETITLE_ID, FTITLE_DEF> Tables;
    
    RTYPEFINAL2_API FTITLE_DEF_TABLE();
};

