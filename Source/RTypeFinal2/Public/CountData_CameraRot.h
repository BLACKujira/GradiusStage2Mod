#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CountData_Header.h"
#include "CountData_CameraRot.generated.h"

UCLASS(Blueprintable)
class UCountData_CameraRot : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator rot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UCountData_CameraRot();

};

