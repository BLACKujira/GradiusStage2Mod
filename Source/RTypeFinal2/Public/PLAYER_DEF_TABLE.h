#pragma once
#include "CoreMinimal.h"
#include "EBODY_NO.h"
#include "PCMN_DEF_TABLE.h"
#include "PLAYER_DEF.h"
#include "PLAYER_DEF_TABLE.generated.h"

USTRUCT(BlueprintType)
struct FPLAYER_DEF_TABLE : public FPCMN_DEF_TABLE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBODY_NO, FPLAYER_DEF> Tables;
    
    RTYPEFINAL2_API FPLAYER_DEF_TABLE();
};

