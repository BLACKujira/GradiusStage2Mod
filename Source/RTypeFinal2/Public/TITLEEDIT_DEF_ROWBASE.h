#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETITLE_PIECE.h"
#include "TITLEEDIT_DEF_ROWBASE.generated.h"

USTRUCT(BlueprintType)
struct FTITLEEDIT_DEF_ROWBASE : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETITLE_PIECE ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PicPath;
    
    RTYPEFINAL2_API FTITLEEDIT_DEF_ROWBASE();
};

