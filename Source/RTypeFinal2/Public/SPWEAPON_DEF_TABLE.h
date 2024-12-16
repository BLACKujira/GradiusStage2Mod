#pragma once
#include "CoreMinimal.h"
#include "ESPWEAPON_NO.h"
#include "PCMN_DEF_TABLE.h"
#include "SPWEAPON_DEF.h"
#include "SPWEAPON_DEF_TABLE.generated.h"

USTRUCT(BlueprintType)
struct FSPWEAPON_DEF_TABLE : public FPCMN_DEF_TABLE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESPWEAPON_NO, FSPWEAPON_DEF> Tables;
    
    RTYPEFINAL2_API FSPWEAPON_DEF_TABLE();
};

