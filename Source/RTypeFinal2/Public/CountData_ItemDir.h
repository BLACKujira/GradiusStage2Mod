#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "ECountData_ItemScrollDir.h"
#include "CountData_ItemDir.generated.h"

UCLASS(Blueprintable)
class UCountData_ItemDir : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECountData_ItemScrollDir Dir;
    
    UCountData_ItemDir();

};

