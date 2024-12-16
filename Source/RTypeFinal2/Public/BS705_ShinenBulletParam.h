#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "S000Param.h"
#include "BS705_ShinenBulletParam.generated.h"

UCLASS(Blueprintable)
class UBS705_ShinenBulletParam : public US000Param {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HittableDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox2D SnnBltScreenRange;
    
    UBS705_ShinenBulletParam();

};

