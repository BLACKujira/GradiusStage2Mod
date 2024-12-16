#pragma once
#include "CoreMinimal.h"
#include "ETITLE_PIECE.h"
#include "TitleEditInfo.generated.h"

USTRUCT(BlueprintType)
struct FTitleEditInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETITLE_PIECE> TitlePiece;
    
    RTYPEFINAL2_API FTitleEditInfo();
};

