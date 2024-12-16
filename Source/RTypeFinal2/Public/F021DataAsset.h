#pragma once
#include "CoreMinimal.h"
#include "F001DataAsset.h"
#include "F021DataAsset.generated.h"

UCLASS(Blueprintable)
class UF021DataAsset : public UF001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AP_Search;
    
    UF021DataAsset();

};

