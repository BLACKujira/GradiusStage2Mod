#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERECORD_ID.h"
#include "RECORD_DEF_ROWBASE.generated.h"

USTRUCT(BlueprintType)
struct FRECORD_DEF_ROWBASE : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERECORD_ID ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NameKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Masked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OpenFlag;
    
    RTYPEFINAL2_API FRECORD_DEF_ROWBASE();
};

