#pragma once
#include "CoreMinimal.h"
#include "SplineCmd_Header.h"
#include "SplineCmd_EVENT.generated.h"

UCLASS(Blueprintable)
class USplineCmd_EVENT : public USplineCmd_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    USplineCmd_EVENT();

};

