#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_ForceSetting.generated.h"

UCLASS(Blueprintable)
class UCountData_ForceSetting : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 type0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 type1;
    
    UCountData_ForceSetting();

};

