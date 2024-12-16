#pragma once
#include "CoreMinimal.h"
#include "ETITLE_PIECE.h"
#include "PCMN_DEF_TABLE.h"
#include "TITLEEDIT_DEF.h"
#include "TITLEEDIT_DEF_TABLE.generated.h"

USTRUCT(BlueprintType)
struct FTITLEEDIT_DEF_TABLE : public FPCMN_DEF_TABLE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETITLE_PIECE, FTITLEEDIT_DEF> Tables;
    
    RTYPEFINAL2_API FTITLEEDIT_DEF_TABLE();
};

