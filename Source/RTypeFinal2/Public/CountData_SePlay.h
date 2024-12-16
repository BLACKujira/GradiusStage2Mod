#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_SePlay.generated.h"

class UObject;

UCLASS(Blueprintable)
class UCountData_SePlay : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Cue;
    
    UCountData_SePlay();

};

