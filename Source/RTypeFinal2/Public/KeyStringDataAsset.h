#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KeyStringDataAsset.generated.h"

UCLASS(Blueprintable)
class UKeyStringDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> KeyString;
    
    UKeyStringDataAsset();

};

