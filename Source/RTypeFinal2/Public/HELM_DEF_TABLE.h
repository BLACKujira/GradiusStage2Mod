#pragma once
#include "CoreMinimal.h"
#include "EHELM_ID.h"
#include "HELM_DEF.h"
#include "PCMN_DEF_TABLE.h"
#include "HELM_DEF_TABLE.generated.h"

USTRUCT(BlueprintType)
struct FHELM_DEF_TABLE : public FPCMN_DEF_TABLE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHELM_ID, FHELM_DEF> Tables;
    
    RTYPEFINAL2_API FHELM_DEF_TABLE();
};

