#pragma once
#include "CoreMinimal.h"
#include "SplineCmd_Header.h"
#include "SplineCmd_CHANGE_DIR.generated.h"

UCLASS(Blueprintable)
class USplineCmd_CHANGE_DIR : public USplineCmd_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Dir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    USplineCmd_CHANGE_DIR();

};

