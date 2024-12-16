#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CountData_Header.h"
#include "CountData_PMoveSpline.generated.h"

class USplineCmdAsset;

UCLASS(Blueprintable)
class UCountData_PMoveSpline : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USplineCmdAsset* SplineCmdAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LookLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector startPos;
    
    UCountData_PMoveSpline();

};

