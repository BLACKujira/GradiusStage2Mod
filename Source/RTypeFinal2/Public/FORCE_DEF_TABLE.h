#pragma once
#include "CoreMinimal.h"
#include "EFORCE_NO.h"
#include "FORCE_DEF.h"
#include "PCMN_DEF_TABLE.h"
#include "FORCE_DEF_TABLE.generated.h"

USTRUCT(BlueprintType)
struct FFORCE_DEF_TABLE : public FPCMN_DEF_TABLE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFORCE_NO, FFORCE_DEF> Tables;
    
    RTYPEFINAL2_API FFORCE_DEF_TABLE();
};

