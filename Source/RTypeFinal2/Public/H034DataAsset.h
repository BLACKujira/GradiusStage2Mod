#pragma once
#include "CoreMinimal.h"
#include "H000DataAsset.h"
#include "H034DataAsset.generated.h"

UCLASS(Blueprintable)
class UH034DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApRate;
    
    UH034DataAsset();

};

