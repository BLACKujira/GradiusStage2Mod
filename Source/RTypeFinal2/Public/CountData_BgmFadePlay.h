#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_BgmFadePlay.generated.h"

class UObject;

UCLASS(Blueprintable)
class UCountData_BgmFadePlay : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Cue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UCountData_BgmFadePlay();

};

