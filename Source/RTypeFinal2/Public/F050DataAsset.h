#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "F001DataAsset.h"
#include "F050DataAsset.generated.h"

UCLASS(Blueprintable)
class UF050DataAsset : public UF001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateSpeed_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateSpeed_Shoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateSpeed_CallBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeatActiveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeatInterval;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeatAp[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeatRadius[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LightColor;
    
    UF050DataAsset();

};

