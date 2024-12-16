#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_Position.h"
#include "EItemType.h"
#include "CountData_ItemSet.generated.h"

UCLASS(Blueprintable)
class UCountData_ItemSet : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCountData_Position position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemType ItemType;
    
    UCountData_ItemSet();

};

