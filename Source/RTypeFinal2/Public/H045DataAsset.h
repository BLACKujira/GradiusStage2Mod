#pragma once
#include "CoreMinimal.h"
#include "H000DataAsset.h"
#include "H045DataAsset.generated.h"

UCLASS(Blueprintable)
class UH045DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DivideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DivideSpeed_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DivideAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DivideGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DivideRotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidHitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleUpTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float AP[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Hp[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DivideNum[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float LRadius[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ERadius[6];
    
    UH045DataAsset();

};

