#pragma once
#include "CoreMinimal.h"
#include "SplineCmd_Header.h"
#include "SplineCmd_EVENT4.generated.h"

UCLASS(Blueprintable)
class USplineCmd_EVENT4 : public USplineCmd_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value2;
    
    USplineCmd_EVENT4();

};

