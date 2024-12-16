#pragma once
#include "CoreMinimal.h"
#include "F001DataAsset.h"
#include "EF001_BS708DataAsset.generated.h"

UCLASS(Blueprintable)
class UEF001_BS708DataAsset : public UF001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatSearchInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatPosLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatPosRight;
    
    UEF001_BS708DataAsset();

};

