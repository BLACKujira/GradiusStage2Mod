#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EContentPlatformType.h"
#include "ContentIdDataTable.generated.h"

USTRUCT(BlueprintType)
struct FContentIdDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EContentPlatformType PlatformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PackageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PackageIdSub1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PackageIdSub2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ContentIds;
    
    RTYPEFINAL2_API FContentIdDataTable();
};

