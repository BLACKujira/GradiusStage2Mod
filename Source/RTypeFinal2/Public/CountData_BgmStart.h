#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_BgmStart.generated.h"

class UObject;

UCLASS(Blueprintable)
class UCountData_BgmStart : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Cue;
    
    UCountData_BgmStart();

};

