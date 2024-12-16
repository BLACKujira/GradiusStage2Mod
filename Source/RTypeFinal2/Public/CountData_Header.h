#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ECountData_Command.h"
#include "ECountData_Difficulty.h"
#include "CountData_Header.generated.h"

UCLASS(Blueprintable)
class UCountData_Header : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECountData_Difficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECountData_Command Command;
    
    UCountData_Header();

};

