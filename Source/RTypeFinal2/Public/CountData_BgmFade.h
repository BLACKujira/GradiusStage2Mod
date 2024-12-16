#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_BgmFade.generated.h"

UCLASS(Blueprintable)
class UCountData_BgmFade : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeLevel;
    
    UCountData_BgmFade();

};

