#pragma once
#include "CoreMinimal.h"
#include "SplineCmd_Header.h"
#include "SplineCmd_SPD.generated.h"

UCLASS(Blueprintable)
class USplineCmd_SPD : public USplineCmd_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float speed;
    
    USplineCmd_SPD();

};

