#pragma once
#include "CoreMinimal.h"
#include "H000DataAsset.h"
#include "H055DataAsset.generated.h"

UCLASS(Blueprintable)
class UH055DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LengthForGrowth;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float LengthMax[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidthRate[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShrinkSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeepTime[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float AP[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidthForAtk0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidthForAtk1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExLengthForAtk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidthForLand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartupLength;
    
    UH055DataAsset();

};

