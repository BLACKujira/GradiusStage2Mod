#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "F001DataAsset.h"
#include "F062DataAsset.generated.h"

UCLASS(Blueprintable)
class UF062DataAsset : public UF001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LightColor;
    
    UF062DataAsset();

};

