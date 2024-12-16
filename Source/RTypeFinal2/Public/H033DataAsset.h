#pragma once
#include "CoreMinimal.h"
#include "H000DataAsset.h"
#include "H033DataAsset.generated.h"

UCLASS(Blueprintable)
class UH033DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UrokoSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float AP[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Hp[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UrokoAp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UrokoHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpAp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpRad[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float StraightTime[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float UrokoLifeTime[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float UrokoFadeTime[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UrokoNum[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float LRadius[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ERadius[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LUrokoRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EUrokoRadius;
    
    UH033DataAsset();

};

