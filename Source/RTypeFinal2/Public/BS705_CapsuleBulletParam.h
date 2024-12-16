#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "S000Param.h"
#include "BS705_CapsuleBulletParam.generated.h"

UCLASS(Blueprintable)
class UBS705_CapsuleBulletParam : public US000Param {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox2D CapBltScreenRange;
    
    UBS705_CapsuleBulletParam();

};

