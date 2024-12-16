#pragma once
#include "CoreMinimal.h"
#include "ESUIT_ID.h"
#include "PCMN_DEF_TABLE.h"
#include "SUIT_DEF.h"
#include "SUIT_DEF_TABLE.generated.h"

USTRUCT(BlueprintType)
struct FSUIT_DEF_TABLE : public FPCMN_DEF_TABLE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESUIT_ID, FSUIT_DEF> Tables;
    
    RTYPEFINAL2_API FSUIT_DEF_TABLE();
};

