#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESPWEAPON_NO.h"
#include "SPWEAPON_DEF_ROWBASE.generated.h"

USTRUCT(BlueprintType)
struct FSPWEAPON_DEF_ROWBASE : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESPWEAPON_NO ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NameKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DetailKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NameE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString No;
    
    RTYPEFINAL2_API FSPWEAPON_DEF_ROWBASE();
};

