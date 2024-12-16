#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SplineCmdAsset.generated.h"

class USplineCmd_Header;

UCLASS(Blueprintable)
class USplineCmdAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SplineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USplineCmd_Header*> Data;
    
    USplineCmdAsset();

};

