#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESplineCmd_Command.h"
#include "SplineCmd_Header.generated.h"

UCLASS(Blueprintable)
class USplineCmd_Header : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESplineCmd_Command Command;
    
    USplineCmd_Header();

};

