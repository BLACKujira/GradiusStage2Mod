#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_Stage.generated.h"

UCLASS(Blueprintable)
class UCountData_Stage : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stage;
    
    UCountData_Stage();

};

