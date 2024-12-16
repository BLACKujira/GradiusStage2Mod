#pragma once
#include "CoreMinimal.h"
#include "ESplineCmd_ShootType.h"
#include "SplineCmd_Header.h"
#include "SplineCmd_SHOOT_START.generated.h"

UCLASS(Blueprintable)
class USplineCmd_SHOOT_START : public USplineCmd_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESplineCmd_ShootType Type;
    
    USplineCmd_SHOOT_START();

};

