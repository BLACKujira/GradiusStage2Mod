#pragma once
#include "CoreMinimal.h"
#include "DECAL_DEF.h"
#include "PCMN_DEF_TABLE.h"
#include "DECAL_DEF_TABLE.generated.h"

USTRUCT(BlueprintType)
struct FDECAL_DEF_TABLE : public FPCMN_DEF_TABLE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDECAL_DEF> Tables;
    
    RTYPEFINAL2_API FDECAL_DEF_TABLE();
};

