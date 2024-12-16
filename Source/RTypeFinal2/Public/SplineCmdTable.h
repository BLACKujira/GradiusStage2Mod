#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESplineCmd_Command.h"
#include "SplineCmdTable.generated.h"

USTRUCT(BlueprintType)
struct FSplineCmdTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESplineCmd_Command Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FSplineCmdTable();
};

