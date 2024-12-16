#pragma once
#include "CoreMinimal.h"
#include "ESplineCmd_ScrHit.h"
#include "SplineCmd_Header.h"
#include "SplineCmd_SCRHIT.generated.h"

UCLASS(Blueprintable)
class USplineCmd_SCRHIT : public USplineCmd_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESplineCmd_ScrHit ScrHit;
    
    USplineCmd_SCRHIT();

};

