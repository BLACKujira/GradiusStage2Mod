#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_ScrollMode.generated.h"

UCLASS(Blueprintable)
class UCountData_ScrollMode : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Mode;
    
    UCountData_ScrollMode();

};

