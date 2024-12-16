#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "ECountData_PointType.h"
#include "CountData_PointAdd.generated.h"

UCLASS(Blueprintable)
class UCountData_PointAdd : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECountData_PointType PointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointNum;
    
    UCountData_PointAdd();

};

