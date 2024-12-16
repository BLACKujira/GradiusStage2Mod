#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETCOND.h"
#include "ETITLE_ID.h"
#include "TITLE_DEF_ROWBASE.generated.h"

USTRUCT(BlueprintType)
struct FTITLE_DEF_ROWBASE : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETITLE_ID ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NameKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CondKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETCOND Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GetFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CheckFlag;
    
    RTYPEFINAL2_API FTITLE_DEF_ROWBASE();
};

