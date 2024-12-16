#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "B014SHOCKParam.generated.h"

class AB014;
class UB014DataAsset;

UCLASS(Blueprintable)
class UB014SHOCKParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AB014* ownerBit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UB014DataAsset* DataAsset;
    
    UB014SHOCKParam();

};

