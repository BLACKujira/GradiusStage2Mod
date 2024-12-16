#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "H000DataAsset.h"
#include "H059DataAsset.generated.h"

UCLASS(Blueprintable)
class UH059DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<float> Width_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<float> KeepT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FVector> Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<float> ApBase;
    
    UH059DataAsset();

};

