#pragma once
#include "CoreMinimal.h"
#include "F001DataAsset.h"
#include "F067DataAsset.generated.h"

UCLASS(Blueprintable)
class UF067DataAsset : public UF001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<float> RevlSpd;
    
    UF067DataAsset();

};

