#pragma once
#include "CoreMinimal.h"
#include "EMISSILE_NO.h"
#include "MISSILE_DEF.h"
#include "PCMN_DEF_TABLE.h"
#include "MISSILE_DEF_TABLE.generated.h"

USTRUCT(BlueprintType)
struct FMISSILE_DEF_TABLE : public FPCMN_DEF_TABLE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMISSILE_NO, FMISSILE_DEF> Tables;
    
    RTYPEFINAL2_API FMISSILE_DEF_TABLE();
};

