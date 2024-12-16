#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BS002CommandPattern.h"
#include "BS002CommandTable.h"
#include "BS002CombinationTable.generated.h"

UCLASS(Blueprintable)
class UBS002CombinationTable : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NonRotateCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBS002CommandTable> PowCommandTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBS002CommandPattern> CommandPatterns;
    
    UBS002CombinationTable();

};

