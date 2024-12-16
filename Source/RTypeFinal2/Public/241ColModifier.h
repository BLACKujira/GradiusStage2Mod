#pragma once
#include "CoreMinimal.h"
#include "241ColModifier.generated.h"

USTRUCT(BlueprintType)
struct F241ColModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RefNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Dy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Dz;
    
    RTYPEFINAL2_API F241ColModifier();
};

