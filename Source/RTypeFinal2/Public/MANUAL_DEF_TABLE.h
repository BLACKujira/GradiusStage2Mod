#pragma once
#include "CoreMinimal.h"
#include "EMANUAL_ID.h"
#include "EMANUAL_ID2.h"
#include "MANUAL_DEF.h"
#include "PCMN_DEF_TABLE.h"
#include "MANUAL_DEF_TABLE.generated.h"

USTRUCT(BlueprintType)
struct FMANUAL_DEF_TABLE : public FPCMN_DEF_TABLE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMANUAL_ID, FMANUAL_DEF> Tables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMANUAL_ID2, FMANUAL_DEF> Tables2;
    
    RTYPEFINAL2_API FMANUAL_DEF_TABLE();
};

