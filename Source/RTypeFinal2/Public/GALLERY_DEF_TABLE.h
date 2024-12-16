#pragma once
#include "CoreMinimal.h"
#include "EGALLERY_ID.h"
#include "GALLERY_DEF.h"
#include "PCMN_DEF_TABLE.h"
#include "GALLERY_DEF_TABLE.generated.h"

USTRUCT(BlueprintType)
struct FGALLERY_DEF_TABLE : public FPCMN_DEF_TABLE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGALLERY_ID, FGALLERY_DEF> Tables;
    
    RTYPEFINAL2_API FGALLERY_DEF_TABLE();
};

