#pragma once
#include "CoreMinimal.h"
#include "F001DataAsset.h"
#include "F005DataAsset.generated.h"

UCLASS(Blueprintable)
class UF005DataAsset : public UF001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float RearRevOfs[3];
    
    UF005DataAsset();

};

